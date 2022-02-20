#ifndef KAREN_H
# define KAREN_H

#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define CYAN    "\033[36m"      /* Cyan */

#define TYPE 4

enum type {
	e_debug,
	e_info,
	e_warning,
	e_error
};

class Karen
{
private:
	void	_debug( void );
	void	_info( void );
	void	_warning( void );
	void	_error( void );

public:
	Karen( void );
	~Karen( void );

	void	complain( std::string level );
};

#endif