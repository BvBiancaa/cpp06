/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 19:07:26 by bmuni             #+#    #+#             */
/*   Updated: 2023/04/14 15:33:07 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(void)
{
	srand((unsigned) time(NULL));
	Base *base = new Base();
	Base *a = base->generate();
	Base *b = base->generate();
	Base *c = base->generate();

	base->identify(a);
	base->identify(b);
	base->identify(c);

	delete base;
	delete a;
	delete b;
	delete c;

	return (0);
}
