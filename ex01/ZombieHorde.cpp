#include <iostream>
#include "Zombie.class.hpp"
#include "Zombie.help.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
    {
        std::cout << "The Horde must have more than zero zombies" << std::endl;
        return NULL;
    }

    Zombie* zombies = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombies[i].setName(name);
    return (zombies);
}