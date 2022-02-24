#include <iostream>
#include <string>
#include "Zombie.class.hpp"
#include "Zombie.help.hpp"

void    print_horde( int qt_horde, Zombie *horde)
{
    for (int i = 0; i < qt_horde; i++)
    {
        if (!(i % 2))
            horde[i].setName("Martine");
        horde[i].announce();
    }
}

int main ( void )
{
    int     qt_horde = 5;
    Zombie  robert;
    Zombie  roger("Roger");
    Zombie* horde = zombieHorde(qt_horde, "Marcel");

    roger.announce();

    print_horde(qt_horde, horde);
    delete [] horde;


    Zombie* horde_nulle = zombieHorde(-5,  "Robert");
    print_horde(-5, horde_nulle);

    Zombie* horde_petite = zombieHorde(0,  "Robert");
    print_horde(0, horde_petite);
    return (0);
}