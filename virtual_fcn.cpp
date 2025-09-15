#include "Log.h"
#include <string>

class Entity
{
public:
    std::string GetName() { return "Entity"; }
};

class Player : public Entity
{
private:
    std::string m_Name;
public:
    Player(const std::string& name)
        : m_Name(name) {}
    
    std::string GetName() { return m_Name; }

};



int main()
{
    return 0;
}