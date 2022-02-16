#include <iostream>
#include "Zombie.class.hpp"
#include "Zombie.help.hpp"

void    randomChump( std::string name)
{
    Zombie  ran(name);

    ran.announce();
}