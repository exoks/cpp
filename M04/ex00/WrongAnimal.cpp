/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:18:49 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/03 11:39:30 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "WrongAnimal.hpp"

//==== WrongAnimal Default Constructor =========================================
WrongAnimal::WrongAnimal() : type("Unkown")
{
	std::cout << "WrongAnimal Default Constructor Called" << std::endl;
}

//==== WrongAnimal Copy Consturctor ============================================
WrongAnimal::WrongAnimal(const WrongAnimal& wrongAnimal)
{
	(*this) = wrongAnimal;
}

//==== WrongAnimal Constructor =================================================
WrongAnimal::WrongAnimal(std::string type) : type(type)
{
}

//==== WrongAnimal Copy Assignment Operator ====================================
WrongAnimal&	WrongAnimal::operator= (const WrongAnimal& wrongAnimal)
{
	type = wrongAnimal.type;
	return (*this);
}

//==== WrongAnimal Destructor ==================================================
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}

//==== getType =================================================================
std::string	WrongAnimal::getType(void) const
{
	return (type);
}

//==== setType =================================================================
void	WrongAnimal::setType(std::string type)
{
	this->type = type;
}

//==== makeSound ===============================================================
void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal: make sound" << std::endl;
}

