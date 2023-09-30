/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:46:57 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/09/30 20:30:28 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
Point::Point( void ) :
_x(Fixed(0)),
_y(Fixed(0))
{
}

Point::Point( const Fixed x, const Fixed y ) :
_x(Fixed(x)),
_y(Fixed(y))
{

}
