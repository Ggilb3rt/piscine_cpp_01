#include <iostream>
#include "Karen.hpp"

int main()
{
    Karen   lol;
    Karen   pouet;

    lol.complain("DEBUG");
    lol.complain("INFO");
    lol.complain("WARNING");
    lol.complain("ERROR");
    lol.complain("lol");

    std::cout << std::endl;

    void    (Karen::*f)( std::string );
    f = &Karen::complain;
    
    (lol.*f)("INFO");
    (pouet.*f)("pouet");

    return (0);
}