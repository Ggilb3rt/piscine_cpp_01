#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name ) : _name(name), _myWeapon(NULL)
{
    return ;
}

HumanB::~HumanB( void )
{
    return ;
}

void    HumanB::attack( void ) const
{
    if (this->_myWeapon != NULL)
        std::cout << this->_name << " attacks with their " << this->_myWeapon->getType() << std::endl;
    else
        std::cout << this->_name << " attacks without weapon" << std::endl;
}

void    HumanB::setWeapon( Weapon& weapon)
{
    this->_myWeapon = &weapon;
}