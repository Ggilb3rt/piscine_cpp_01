#include <iostream>
#include "Zombie.class.hpp"


Zombie::Zombie( void ) : _name("Robert")
{
    std::cout << "Basic raise of " << this->_name << std::endl;
    return ;
}

Zombie::Zombie( std::string name ) : _name(name)
{
    std::cout << "Raise of " << this->_name << std::endl;
    return ;
}

Zombie::~Zombie()
{
    std::cout << "No brainz for " << this->_name << " he died, again." << std::endl;
    return ;
}

void    Zombie::announce( void ) const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName( std::string name)
{
    // std::cout << this->_name << " change to " << name << std::endl;
    this->_name = name;
}