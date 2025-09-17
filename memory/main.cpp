#include <iostream>
#include <cstddef>
#include <cstdint>
#include <new>      // std::align_val_t
#include <cstdlib>  // malloc/free

struct allocation_metrics {
    uint64_t total_allocated = 0;
    uint64_t total_freed     = 0;
    uint64_t current_usage() const { return total_allocated - total_freed; }
};

static allocation_metrics s;

void* operator new(std::size_t sz) {
    s.total_allocated += sz;
    if (void* p = std::malloc(sz)) return p;
    throw std::bad_alloc();
}

void operator delete(void* p) noexcept {
    // We don't know the size here; can’t add to total_freed reliably.
    // Many ABIs do call the sized form; to be robust, also provide sized version:
    std::free(p);
}

void operator delete(void* p, std::size_t sz) noexcept {
    s.total_freed += sz;
    std::free(p);
}

// Arrays
void* operator new[](std::size_t sz) {
    s.total_allocated += sz;
    if (void* p = std::malloc(sz)) return p;
    throw std::bad_alloc();
}
void operator delete[](void* p) noexcept { std::free(p); }
void operator delete[](void* p, std::size_t sz) noexcept { s.total_freed += sz; std::free(p); }

// Aligned (C++17+)
void* operator new(std::size_t sz, std::align_val_t al) {
    s.total_allocated += sz;
    if (void* p = std::aligned_alloc(static_cast<std::size_t>(al), ((sz + static_cast<std::size_t>(al)-1) /
        static_cast<std::size_t>(al)) * static_cast<std::size_t>(al))) return p;
    throw std::bad_alloc();
}
void operator delete(void* p, std::align_val_t) noexcept { std::free(p); }
void operator delete(void* p, std::size_t sz, std::align_val_t) noexcept { s.total_freed += sz; std::free(p); }
void* operator new[](std::size_t sz, std::align_val_t al) {
    s.total_allocated += sz;
    if (void* p = std::aligned_alloc(static_cast<std::size_t>(al), ((sz + static_cast<std::size_t>(al)-1) /
        static_cast<std::size_t>(al)) * static_cast<std::size_t>(al))) return p;
    throw std::bad_alloc();
}
void operator delete[](void* p, std::align_val_t) noexcept { std::free(p); }
void operator delete[](void* p, std::size_t sz, std::align_val_t) noexcept { s.total_freed += sz; std::free(p); }


struct Object
{
    int x, y, z;
};


static void print_memory_usage()
{
    std::cout << "Memory Usage : " << s.current_usage() << " bytes\n";
}


int main()
{
    print_memory_usage();                  // expect 0
    std::string s = std::string(1000, 'a');
    print_memory_usage();                  // should jump by ~capacity
    {
        auto obj = std::make_unique<Object>(); // will allocate; sized or unsized delete on exit
        print_memory_usage();
    }
    print_memory_usage();                  // should drop back down

}