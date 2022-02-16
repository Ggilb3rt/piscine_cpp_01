#include <iostream>
#include <string>
#include "Zombie.class.hpp"
#include "Zombie.help.hpp"

int main ( void )
{
    int     qt_horde = 6;
    Zombie  roger("Roger");
    Zombie* horde = zombieHorde(qt_horde, "Marcel");

    roger.announce();
    
    for (int i = 0; i < qt_horde; i++)
    {
        if (!(i % 2))
            horde[i].setName("Martine");
        horde[i].announce();
    }
    delete [] horde;
    return (0);
}