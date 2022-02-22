#include <iostream>
#include "Karen.hpp"

Karen::Karen( void )
{
    std::cout << "A wild Karen appears !" << std::endl;
    return ;
}

Karen::~Karen( void )
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
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void    Karen::complain( std::string level )
{
    std::string const   type[TYPE] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void                (Karen::*f)(void);
    int                 val = -1;

    for (int i = 0; i < TYPE; i++)
    {
        if (type[i] == level)
            val = i;
    }

    switch (val)
    {
        case e_debug:
        {
            f = &Karen::_debug;
            (this->*f)();
            break;
        }
        case e_info:
        {
            f = &Karen::_info;
            (this->*f)();
            break;
        }
        case e_warning:
        {
            f = &Karen::_warning;
            (this->*f)();
            break;
        }
        case e_error:
        {
            f = &Karen::_error;
            (this->*f)();
            break;
        }
        default:
        {
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
        }
    }
}

// void    Karen::complain( std::string level )
// {
//     std::string     type[TYPE] = {"DEBUG", "INFO", "WARNING", "ERROR"};
//     functPtr            funct[TYPE];

//     funct[0] = &Karen::_debug;
//     funct[1] = &Karen::_info;
//     funct[2] = &Karen::_warning;
//     funct[3] = &Karen::_error;

//     for (int i = 0; i < TYPE; i++)
//     {
//         if (type[i] == level)
//             (this->*funct[i])();
//     }
// }