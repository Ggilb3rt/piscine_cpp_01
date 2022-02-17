#include <iostream>
#include "Karen.hpp"

Karen::Karen(/* args */)
{
    std::cout << "A wild Karen appears !" << std::endl;
    return ;
}

Karen::~Karen()
{
    std::cout << "Karen run away !" << std::endl;
    return ;
}

void    Karen::_debug( void )
{
    std::cout << CYAN << "DEBUG : " << RESET;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void    Karen::_info( void )
{
    std::cout << BLUE << "INFO : " << RESET;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void    Karen::_warning( void )
{
    std::cout << YELLOW << "WARNING : " << RESET;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Karen::_error( void )
{
    std::cout << RED << "ERROR : " << RESET;
    std::cout << "his is unacceptable ! I want to speak to the manager now." << std::endl;
}

void    Karen::complain( std::string level )
{
    std::string     type[TYPE] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    functPtr            funct[TYPE];

    funct[0] = &Karen::_debug;
    funct[1] = &Karen::_info;
    funct[2] = &Karen::_warning;
    funct[3] = &Karen::_error;

    for (int i = 0; i < TYPE; i++)
    {
        if (type[i] == level)
            (this->*funct[i])();
    }
}