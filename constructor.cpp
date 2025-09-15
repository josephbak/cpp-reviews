#include "Log.h"


class Entity
{
public:
    float X, Y;

    // constructor
    Entity()
    {
        X = 0.0f;
        Y = 0.0f;
        std::cout << "Created Entity! " << std::endl;
    }

    // Entity(float x, float y)
    // {
    //     X = x;
    //     Y = y;
    // }

    // destructor
    ~Entity()
    {
        std::cout << "Destroyed Entity! " << std::endl;

    }


    void Print()
    {
        std::cout << X << ", " << Y << std::endl;
    }
};


void Function()
{
    Entity e;
    // Entity e(10.0f, 5.0f);
    e.Print();

}

int main()
{
    Function();
    return 0;
}