#include "Zombie.hpp"
#include <string>

int main()
{
    std::string n1 = "random_Zombie";
    randomChump(n1);

    //std::string n2 = "new_Zombie";
    Zombie* y = newZombie("new_Zombie");
    y->announce();
    delete (y);
}