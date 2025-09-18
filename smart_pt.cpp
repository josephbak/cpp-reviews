#include <iostream>
#include <string>
#include <memory>

class Entity
{
public:
    Entity()
    {
        std::cout << "Created Entity!" << std::endl;
    }

    ~Entity()
    {
        std::cout << "Dstroyed Entity!" << std::endl;
    }

    void Print() {}
};


int main()
{
    {
        // shared pointer increased the reference counter
        // it keeps what's referenced alive
        // std::shared_ptr<Entity> e0;
        
        // weak pointer doesn't increase the reference count for shared pointer
        // it means that it doesn't keep what's referenced alive.
        std::weak_ptr<Entity> e0; 

        {
        // std::unique_ptr<Entity> entity = std::make_unique<Entity>();
        // entity -> Print();

        std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
        // std::weak_ptr<Entity> weakEntity = sharedEntity;
        e0 = sharedEntity;


        }
    }

    std::cin.get();
    return 0;
}