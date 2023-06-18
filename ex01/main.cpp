/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:26:12 by bmuni             #+#    #+#             */
/*   Updated: 2023/06/18 17:28:47 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
#include "Serializer.hpp"

int main(void)
{
	Data	data;

	std::cout << &data << std::endl;
	std::cout << Serializer::deserialize(Serializer::serialize(&data)) << std::endl;
	return (0);
}