/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:30:06 by bmuni             #+#    #+#             */
/*   Updated: 2023/04/14 16:55:43 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <stdint.h>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

class Serializer
{
	private:
		Serializer();
	public:
		Serializer(Serializer const & src);
		~Serializer();
		Serializer & operator=(Serializer const & src);

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif