/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:17:09 by bmuni             #+#    #+#             */
/*   Updated: 2023/04/13 18:32:06 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP
#define MAX_INT 2147483647
#define MIN_INT -2147483648
#define MAX_FLOAT 3.402823466e+38F
#define MIN_FLOAT 1.175494351e-38F
#define MAX_DOUBLE 1.7976931348623158e+308
#define MIN_DOUBLE 2.2250738585072014e-308

#include <iostream>

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter const & src);
		~ScalarConverter();
		ScalarConverter & operator=(ScalarConverter const & src);
		void	convert(std::string n);
};

#endif