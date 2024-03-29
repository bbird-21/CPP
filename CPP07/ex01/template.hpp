/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:54:22 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/11/06 17:32:48 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__TEMPLATE_HPP__
#define __TEMPLATE_HPP__

template <typename T> void iter( T* addr, int lenght, void (*fp)( T& ) )
{
	for ( int i = 0; i < lenght; i++ ) {
		fp(addr[i]);
	}
}


#endif