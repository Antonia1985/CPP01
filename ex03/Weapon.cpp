#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string t) : type(t){}

const std::string& Weapon::getType() const
{
    return type;
}


void Weapon::setType(const std::string& t)
{
    type = t;
}