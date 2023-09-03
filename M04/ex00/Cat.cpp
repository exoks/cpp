/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:42:12 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/03 10:53:31 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.hpp"

//==== Cat Default Constructor =================================================
Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default Constructor Called" << std::endl;
}

//==== Cat Copy Constructor ====================================================
Cat::Cat(const Cat& cat)
{
	*this = cat;
}

//==== Cat Copy Assignment Operator ============================================
Cat&	Cat::operator= (const Cat& cat)
{
	type = cat.type;
	return (*this);
}

//==== Cat Destructor ==========================================================
Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
}

//==== makeSound ===============================================================
void	Cat::makeSound(void) const
{
	std::cout << "cat : miaw miaw" << std::endl;
}
