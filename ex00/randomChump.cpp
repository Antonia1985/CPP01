#include "Zombie.hpp"
#include <string>

void randomChump(const std::string& name )
{
    Zombie z(name);    
    z.announce();
}