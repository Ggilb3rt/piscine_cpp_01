#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type ) : _name(name), _myWeapon(type)
{
    return ;
}

HumanA::~HumanA( void )
{
    return ;
}

void    HumanA::attack( void ) const
{
    std::cout << this->_name << " attacks with their " << this->_myWeapon.getType() << std::endl;
}