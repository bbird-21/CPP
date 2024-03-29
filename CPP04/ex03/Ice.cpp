/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:42:42 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/17 09:59:45 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"), _type("ice")
{
	std::cout << "Ice Materia is created" << std::endl;
}

Ice::~Ice() 
{
	std::cout << "Ice Materia is destroyed" << std::endl;
}

Ice::Ice( const Ice& cpy) : AMateria( cpy )
{
	*this = cpy;
}

Ice&	Ice::operator= ( const Ice& cpy)
{
	this->_type = cpy._type;
	return ( *this );
}

void	Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const
{
	AMateria	*newObj = new Ice( *this );
	
	return ( newObj );
}

std::string const & Ice::getType() const
{
	return ( this->_type );
}