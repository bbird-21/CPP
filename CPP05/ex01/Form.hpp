/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:56:44 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/25 12:29:47 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM__
#define __FORM__

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

private:

	std::string const	_name ;
	bool				_signed;
	unsigned int const	_s_grade;
	unsigned int const	_x_grade;

	class GradeTooLowException : public std::exception
	{
		public :
			virtual const char* what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
		public :
			virtual const char* what() const throw();
	};

	class AlreadySigned : public std::exception
	{
		public :
			virtual const char* what() const throw();
	};

public:

	/*	Constructor / Destructor	*/
	Form( std::string name, unsigned int s_grade, unsigned int x_grade );
	~Form();
	Form( const Form& cpy );
	Form&	operator= ( const Form& cpy );

	bool	beSigned( Bureaucrat& obj );
	
	/*	Setter						*/
	void			setGrade( unsigned int grade );

	/*	Getter						*/
	unsigned int	getXGrade( void ) const;
	unsigned int	getSGrade( void ) const;
	bool			getSigned( void ) const;
	std::string		getName( void ) const;
};

std::ostream&	operator<< (std::ostream&, Form const & form);

#endif /* __FORM__ */