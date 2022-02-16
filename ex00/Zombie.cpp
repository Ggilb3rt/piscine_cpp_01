#include <iostream>
#include "Zombie.class.hpp"

Zombie::Zombie( std::string name ) : _name(name)
{
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