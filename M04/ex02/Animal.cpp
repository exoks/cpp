/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:18:49 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/05 23:50:34 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "Animal.hpp"

//==== Animal Default Constructor ==============================================
Animal::Animal(void) : type("Unknown")
{
	std::cout << "Animal Default Constructor Called" << std::endl;
}

//==== Animal Copy Consturctor =================================================
Animal::Animal(const Animal& animal)
{
	(*this) = animal;
}

//==== Animal Constructor ======================================================
Animal::Animal(std::string type) : type(type)
{
}

//==== Animal Copy Assignment Operator =========================================
Animal&	Animal::operator= (const Animal& animal)
{
	type = animal.type;
	return (*this);
}

//==== Animal Destructor =======================================================
Animal::~Animal(void)
{
	std::cout << "Animal Destructor Called" << std::endl;
}

//==== getType =================================================================
std::string	Animal::getType(void) const
{
	return (type);
}
