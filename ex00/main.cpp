#include <iostream>
#include <string>
#include "Zombie.class.hpp"
#include "Zombie.help.hpp"

int main ( void )
{
    Zombie  roger("roger");
    Zombie* momo = newZombie("momo");

    momo->announce();
    randomChump("John Smith");
    roger.announce();

    delete momo;
    roger.announce();
    return (0);
}