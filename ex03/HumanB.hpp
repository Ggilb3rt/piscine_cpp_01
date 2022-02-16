#ifndef HUMANB_H
# define HUMANB_H

class HumanB
{
private:
    std::string _name;
    Weapon*      _myWeapon;

public:
    HumanB( std::string name );
    ~HumanB( void );

    void    attack() const;
    void    setWeapon( Weapon& weapon);
};

#endif