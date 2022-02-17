#include <iostream>
#include "Karen.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        Karen       k;
        std::string level = av[1];

        k.complain(level);
    }
    else
        std::cout << "Bad argument" << std::endl;
    return (0);
}