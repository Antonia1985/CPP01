#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string n) : name(n), weapon(NULL){}

void HumanB::attack()
{
    if(weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " attacks without weapon" << std::endl;
}

void HumanB::setWeapon(Weapon& w)
{    
    weapon = &w;
}