#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H


class Zombie
{
private:
    std::string	 _name;

public:
    Zombie( std::string name );
    ~Zombie( void );

    void    announce( void ) const;
};

#endif