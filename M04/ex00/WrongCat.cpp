/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:42:12 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/03 11:13:33 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "WrongCat.hpp"

//==== WrongCat Default Constructor ============================================
WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default Constructor Called" << std::endl;
}

//==== WrongCat Copy Constructor ===============================================
WrongCat::WrongCat(const WrongCat& wrongCat)
{
	*this = wrongCat;
}

//==== WrongCat Copy Assignment Operator =======================================
WrongCat&	WrongCat::operator= (const WrongCat& wrongCat)
{
	type = wrongCat.type;
	return (*this);
}

//==== WrongCat Destructor =====================================================
WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor Called" << std::endl;
}

//==== makeSound ===============================================================
void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat : miaw miaw" << std::endl;
}
