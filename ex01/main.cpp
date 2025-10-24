#include "Zombie.hpp"
#include <string>
#include <iostream>
#include <sstream>
#include <cctype>

bool isNumber(const std::string& s)
{
    if(s.empty())
        return false;

    for(size_t i = 0; i < s.size(); i++)
    {
        if(!isdigit(static_cast<unsigned char>(s[i])))
            return false;
        
    }
    return true;
}

int main()
{
    std::string num;
    int n;

    while (1)
    {       
        std::cout << "Give number of Zombies" << std::endl;
        std::cin >> num;

        if (isNumber(num))
        {
            //convert std::string → int
            std::istringstream iss(num);
            if (!(iss >> n)) 
            { 
                std::cerr << "Conversion string → int failed" << std::endl;
                return 0;
            }
            if (n <= 0)
            {
                std::cerr << "The number of Zombies must be >= 1" << std::endl;
                return 0;
            }
            break;
        }           
        else
            std::cerr << "Enter a valid number" << std::endl;

    }

    std::string names;
    std::cout << "Give the names of the Zombies" << std::endl;
    std::getline(std::cin >> std::ws, names);

    if (n >= 1)
    { 
        Zombie* horde = zombieHorde(n, names);
        for(int i = 0; i < n; i++)
        {            
            horde[i].announce();
        }
        delete [] horde;
    }

    return 0;
}