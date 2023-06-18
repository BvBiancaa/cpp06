/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:26:12 by bmuni             #+#    #+#             */
/*   Updated: 2023/04/13 16:08:38 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int ac, char **av)
{
	ScalarConverter	conv;

	if (ac == 2)
		conv.convert(av[1]);
	else
		std::cout << "Error: One argument required" << std::endl;
	return (0);
}