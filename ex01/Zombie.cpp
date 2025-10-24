#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie(std::string n) : name(n){};

void Zombie::setName(const std::string& n)
{
    name = n;
}

void Zombie::announce(void) const
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << name << ": Destructor called!" << std::endl;
}
