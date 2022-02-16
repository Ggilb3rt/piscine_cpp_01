#include <iostream>

int main( int ac, char **av )
{
    if (ac == 4)
    {
        std::string     s1 = av[2];
        std::string     s2 = av[3];

        std::cout << s1 <<  "  " << s1.length() << std::endl << s2 << "  " << s2.length() << std::endl;
        return (0);
    }
    std::cout << "Bad number of arguments" << std::endl;
    return (0);
}

// use string.insert() and string.erase()
// string.find()