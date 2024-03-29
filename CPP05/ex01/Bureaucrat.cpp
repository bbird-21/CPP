/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:59:01 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/25 12:28:35 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include <cstdlib>

/*	-----------Constructor / Copy Constructor / Destructor-----------*/
Bureaucrat::Bureaucrat( std::string name, int grade ): _name(name), _grade( grade )
{
	this->setGrade( grade );
	std::cout << "Bureaucrat was successfully created with grade " << grade << std::endl;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat( const Bureaucrat& cpy ) : _name(cpy._name), _grade(cpy._grade)
{
	std::cout << "Copy completed succesfully with copy constructor" << std::endl;
}

Bureaucrat&	Bureaucrat::operator= ( const Bureaucrat& cpy )
{
	this->_grade = cpy.getGrade();
	
	return ( *this );
}

/*	---------Getter--------------------------------------------------*/
std::string	const	Bureaucrat::getName( void ) const
{
	return ( this->_name );
}

unsigned int		Bureaucrat::getGrade( void ) const
{
	return ( this->_grade );
}

/*	---------Others--------------------------------------------------*/
void				Bureaucrat::incrementGrade( void )
{
	unsigned int	cpy_grade = this->_grade;
	setGrade( --cpy_grade );
	this->_grade--;
	std::cout << "Bureaucrat was successfully upgraded to " << this->_grade << std::endl;
}

void				Bureaucrat::decrementGrade( void )
{
	unsigned int	cpy_grade = this->_grade;
	setGrade ( ++cpy_grade );
	this->_grade++;
	std::cout << "Bureaucrat was successfully downgraded to " << this->_grade << std::endl;
}

std::ostream&		operator<< ( std::ostream& stream, Bureaucrat const & obj )
{
	return ( stream << obj.getName() << ", bureaucrat grade " << obj.getGrade() );
}

const char*			Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade Too High");
}

const char*			Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low");
}

void				Bureaucrat::setGrade( int grade )
{
	try {
		if ( grade < 1 ) {
			throw ( Bureaucrat::GradeTooHighException() );
		}
		else if ( grade > 150 )
			throw ( Bureaucrat::GradeTooLowException() );
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		throw;
	}
}

void				Bureaucrat::signForm( Form &form )
{
	try {
		if ( form.beSigned( *this ) )
			std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch ( std::exception &e ) {
		std::cout << this->_name << " couldn't sign because "<< e.what() << std::endl;
	}
}
