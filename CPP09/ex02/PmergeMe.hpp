/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:37:31 by mmeguedm          #+#    #+#             */
/*   Updated: 2023/12/01 17:27:14 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <cmath>
# include <cctype>
# include <vector>
# include <sstream>
# include <cstdlib>
# include <iostream>

bool	parseInput( int argc, char** argv, std::vector<int> & _vec );
void	sort( std::vector<int> & vec, int layer );
void	displayVec( std::vector<int> vec );
unsigned long	getSize( std::vector<int>::iterator it, std::vector<int>::iterator end);
void	swapPair( std::vector<int>::iterator it, std::vector<int>::iterator end );
void	insertPair( std::vector<int>::iterator it, std::vector<int>::iterator end, std::vector<int> & johnson );
void	fordJohson( std::vector<int> vec, std::vector<int> & odd, int step );
void	jacobsthal( std::vector<int> & vec, std::vector<int> & odd, int layer );