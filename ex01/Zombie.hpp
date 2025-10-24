#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {

    private:
    std::string name;

    public:
    Zombie(){};
    Zombie(std::string n);
    void announce(void) const;
    void setName(const std::string& n);
    ~Zombie();
    
};

Zombie* zombieHorde(int N, const std::string& name);

#endif