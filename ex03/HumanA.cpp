#include "HumanA.hpp"
//#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(std::string n,  Weapon& w ) : name(n), weapon(w){}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl; 
}
