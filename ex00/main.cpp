#include <iostream>
#include <string>
#include "Zombie.class.hpp"
#include "Zombie.help.hpp"

int main ( void )
{
    Zombie  roger("Roger");
    Zombie* marcel = newZombie("Marcel");

    marcel->announce();
    std::cout << std::endl;
    randomChump("John Smith");
    std::cout << std::endl;
    roger.announce();

    delete marcel;
    std::cout << std::endl;
    roger.announce();
    std::cout << std::endl;
    return (0);
}