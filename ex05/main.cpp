#include "Harl.hpp"
#include <string>
#include <iostream>

int main(int ac, char**av)
{
    if (ac != 2)
    {
        std::cerr << "Please provide a complain: DEBUG, INFO, WARNING, ERROR " << std::endl;
        return 1;
    }
    
    std::string level = av[1];
    if(level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
    {
        std::cerr << "Invalid complain" << std::endl;
        return 1;
    }
    
    Harl h;
    h.complain(level);

    return 0;
}