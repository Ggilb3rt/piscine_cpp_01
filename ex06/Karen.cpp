#include <iostream>
#include "Karen.hpp"

Karen::Karen(/* args */)
{
    std::cout << GREEN << "A wild Karen appears !" << RESET << std::endl;
    return ;
}

Karen::~Karen()
{
    std::cout << GREEN << "Karen run away !" << RESET << std::endl;
    return ;
}

void    Karen::_debug( void )
{
    std::cout << CYAN << "[ DEBUG ]" << RESET << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
    std::cout << "I really do !" << std::endl;
}

void    Karen::_info( void )
{
    std::cout << BLUE << "[ INFO ]" << RESET << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void    Karen::_warning( void )
{
    std::cout << YELLOW << "[ WARNING ]" << RESET << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Karen::_error( void )
{
    std::cout << RED << "[ ERROR ]" << RESET << std::endl;
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
        }
        case e_info:
        {
            f = &Karen::_info;
            (this->*f)();
        }
        case e_warning:
        {
            f = &Karen::_warning;
            (this->*f)();
        }
        case e_error:
        {
            f = &Karen::_error;
            (this->*f)();
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
//     void            (Karen::*f[TYPE])(void) = {
//         &Karen::_debug,
//         &Karen::_info,
//         &Karen::_warning,
//         &Karen::_error
//     };
//     bool            print_all = false;

//     for (int i = 0; i < TYPE; i++)
//     {
//         if (type[i] == level)
//             print_all = true;
//         if (print_all)
//         {
//             (this->*f[i])();
//             std::cout << std::endl;
//         }
//     }
//     if (!print_all)
//         std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
// }
