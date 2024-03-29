/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:56:41 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/29 17:27:51 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class	Contact {
	public :
		Contact();
		~Contact();
		//	Setter
		void	setFirstName( std::string firstname );
		void	setLastName( std::string lastname );
		void	setNickName( std::string nickname );
		void	setPhoneNumber( std::string phonenumber );
		void	setDarkestSecret( std::string darkest_secret );
		//	Getter
		std::string	getFirstName( void ) const;
		std::string	getLastName( void ) const;
		std::string	getNickName( void ) const;
		std::string	getPhoneNumber( void ) const;
		std::string	getDarkestSecret( void ) const;
		//	Others
		static int	getNbInst( void );
	private :
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_darkest_secret;
		std::string	_phonenumber;
		static int	_nbInst;
};

#endif
