#ifndef ZOMBIE_HELP_H
# define ZOMBIE_HELP_H

#include <iostream>
#include "Zombie.class.hpp"

Zombie* newZombie( std::string name);
void    randomChump( std::string name);
Zombie* zombieHorde( int N, std::string name );


#endif