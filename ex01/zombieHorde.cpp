#include "Zombie.hpp"
#include <string>
#include <iostream>
#include <sstream>

// with different names
/*Zombie* zombieHorde( int N, const std::string& names)
{
   
    Zombie* horde = new Zombie[N];
   
    std::istringstream iss(names);
    for(int i =0; i < N; i++)
    {
        std::string name;
        if (!(iss >> name))
        {
            name = "noName";
        }
        horde[i].setName(name);
    }
    return horde;
    
}*/

Zombie* zombieHorde( int N, const std::string& names)
{
   
    Zombie* horde = new Zombie[N];
   
    for(int i =0; i < N; i++)
    {
        horde[i].setName(names);
    }
    return horde;
    
}