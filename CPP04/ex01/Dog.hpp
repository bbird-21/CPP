/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:39:11 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/13 18:21:22 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
#define __DOG_HPP__

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{

public:

	Dog( void );
	~Dog( void );
	Dog& operator= (const Dog& cpy);
	Dog( const Dog& cpy);

	void makeSound( void ) const;
	std::string	getType( void );

private:
	Brain	*_brain;
};

#endif /* __DOG_HPP__ */