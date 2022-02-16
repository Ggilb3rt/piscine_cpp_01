#include <iostream>
#include "Zombie.class.hpp"
#include "Zombie.help.hpp"

Zombie* newZombie( std::string name)
{
    Zombie* undead = new Zombie(name); 
    return (undead);
}