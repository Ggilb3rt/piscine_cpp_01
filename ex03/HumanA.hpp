#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon&     _myWeapon;

public:
    HumanA( std::string name, Weapon& type );
    ~HumanA( void );

    void    attack() const;
};

#endif