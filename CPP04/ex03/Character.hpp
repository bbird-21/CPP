/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:52:17 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/16 17:52:23 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class Character : public ICharacter
{

public:

	/*----------Constructor/Destructor/Copy Constructor---------*/
	Character();
	Character( std::string const & name );
	~Character();	
	Character( const Character& cpy );
	Character&	operator= ( const Character& cpy );
	
	/*----------Inherited methods------------------------*/
	std::string	const & getName() const;
	void		equip( AMateria* m );
	void		unequip( int idx );
	void		use( int idx, ICharacter& target );

private:

	std::string	_name;
	AMateria	*_inventory[4];
	AMateria	*_garbage[100];
};

#endif /* __CHARACTER_HPP__ */