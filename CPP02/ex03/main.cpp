/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:00:56 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/10/11 19:51:52 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int	main( void )
{
	Point	a(0.0f, 0.0f), b(1.0f, 0.0f), c(0.0f, 0.1f), point(0.5f, 0.0f);

	std::cout << "Main Raw Bits : " << a.getx() << std::endl;
	if (bsp(a, b, c, point))
		std::cout << "Is in the triangle !" << std::endl;
	else
		std::cout << "Is not in the triangle." << std::endl;
	return 0;
}