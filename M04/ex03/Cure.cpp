/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:37:41 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/03 23:40:35 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

//==== Cure Default Constructor =================================================
Cure::Cure(void)
{
	type = "cure";
	std::cout << "Cure Constructor Called" << std::endl;
}

//==== Cure Copy Constructor ====================================================
Cure::Cure(const Cure& cure)
{
	*this = cure;
}

//==== Cure Destructor ==========================================================
Cure::~Cure()
{
	std::cout << "Cure Destructor Called" << std::endl;
}

//==== Cure Copy Assignment Operator ============================================
Cure&	Cure::operator= (const Cure& cure)
{
	type = cure.type;
	return (*this);
}

//==== Cure Clone Overrideing ===================================================
Cure		*Cure::clone() const
{
	Cure	*cure;

	cure = new Cure();
	*cure = *this;
	return (cure);
}

//==== user ====================================================================
void	Cure::use(ICharacter& target)
{
	(void) target;
}
