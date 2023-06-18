/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:20:04 by bmuni             #+#    #+#             */
/*   Updated: 2023/04/13 18:50:19 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
#include <string>
#include <cstring>
#include <cstdlib>

ScalarConverter::ScalarConverter()
{
	return ;
}

ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
	*this = src;
	return ;
}

ScalarConverter::~ScalarConverter()
{
	return ;
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & src)
{
	(void)src;
	return (*this);
}

void	ft_char_to(std::string n)
{
	if ((n[0] >= 32 && n[0] <= 47) || (n[0] >= 57 && n[0] <= 126))
		std::cout << "char: " << n[0] << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(n[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(n[0]) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(n[0]) << ".0" << std::endl;
}

void	ft_int_to(std::string n)
{
	int conv = atoi(n.c_str());
	if ((conv >= 32 && conv <= 126))
		std::cout << "char: " << static_cast<char>(conv) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(conv) << std::endl;
	std::cout << "float: " << static_cast<float>(conv) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(conv) << ".0" << std::endl;
}

void	ft_float_to(std::string n)
{
	char *end;
	float conv = strtof(n.c_str(), &end);
	if ((conv >= 32 && conv <= 126))
		std::cout << "char: " << static_cast<char>(conv) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(conv) << std::endl;
	std::cout << "float: " << static_cast<float>(conv) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(conv) << std::endl;
}

void	ft_double_to(std::string n)
{
	char *end;
	double conv = strtod(n.c_str(), &end);
	if ((conv >= 32 && conv <= 126))
		std::cout << "char: " << static_cast<char>(conv) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(conv) << std::endl;
	std::cout << "float: " << static_cast<float>(conv) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(conv) << std::endl;
}

int	ft_handle_others(std::string n, int len)
{
	if (len == 0)
	{
		std::cout << "Error: NULL input" << std::endl;
		return (1);
	}
	else if (n == "nanf" || n == "+inff" || n == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << n << std::endl;
		if (n == "nanf")
			n = n.substr(0, 3);
		else
			n = n.substr(0, 4);
		std::cout << "double: " << n << std::endl;
		return (1);
	}
	else if (n == "nan" || n == "+inf" || n == "-inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << n << "f" << std::endl;
		std::cout << "double: " << n << std::endl;
		return (1);
	}
	return (0);
}

int	ft_handle_ex(std::string n, int len)
{
	int	space = 0;
	
	while (n[space] == ' ')
		space++;
	if (strstr(n.c_str() + space, " ") != 0)
	{
		std::cout << "Error: One argument needed" << std::endl;
		return (1);
	}
	long int miao = atol(n.c_str());
	if (miao > MAX_INT || miao < MIN_INT)
	{
		std::cout << "Error: Overflow" << std::endl;
		return (1);
	}
	return (ft_handle_others(n, len));
}

void	ScalarConverter::convert(std::string n)
{
	int	len;
	len = n.length();
	if (ft_handle_ex(n, len) == 1)
		return ;
	if (len == 1)
		ft_char_to(n);
	else if (n[len - 1] != 'f' && strstr(n.c_str(), ".") == 0)
		ft_int_to(n);
	else if (n[len - 1] == 'f')
		ft_float_to(n);
	else
		ft_double_to(n);
}