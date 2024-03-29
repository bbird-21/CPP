/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:08:07 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/26 12:35:23 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <csignal>
# include <cstdlib>
# include "Bureaucrat.hpp"
# include "Aform.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
void	terminated( void )
{
	std::cout << "Exception not caught" << std::endl << "Aborted." << std::endl;
	exit(SIGABRT);
}

int	main( void )
{
	std::set_terminate(terminated);
	Aform*	berry  = new ShrubberyCreationForm("Berry");
	try {
		Bureaucrat	bureaucrat("Straw", 1);
		RobotomyRequestForm	robot("Bender");
		PresidentialPardonForm	president("JFK");
		bureaucrat.signForm(*berry);
		berry->execute(bureaucrat);
		berry->execute(bureaucrat);
		bureaucrat.signForm(robot);
		bureaucrat.executeForm( robot );
	}
	catch ( std::exception& e ) {
	}
	delete (berry);



	// robot.execute(bureaucrat);


	// president.execute(bureaucrat);
}