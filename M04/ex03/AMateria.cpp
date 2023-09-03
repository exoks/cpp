/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:05:14 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/03 21:56:57 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "AMateria.hpp"

//==== AMateria Default Constructor ============================================
AMateria::AMateria(void) : type("Unknown")
{
	std::cout << "AMateria Constructor Called" << std::endl;
}

//==== AMateria Copy Consturctor ===============================================
AMateria::AMateria(const AMateria& aMateria)
{
	*this = aMateria;
}

//==== AMateria Destructor =====================================================
AMateria::~AMateria()
{
	std::cout << "AMateria Destructor Called" << std::endl;
}

//==== AMateria Copy Assignment Operator =======================================
AMateria&	AMateria::operator= (const AMateria& aMateria)
{
	// from the subject this line does not make sense
	type = aMateria.type;
	return (*this);
}

//==== getType =================================================================
std::string const&	AMateria::getType(void) const
{
	return (type);
}

//==== use =====================================================================
void	AMateria::use(ICharacter& target)
{
	(void) target;
}

//==== use =====================================================================
/*void	AMateria::use(int index, ICharacter& target)
{
	(void) target;
	(void) index;
}*/

//==== equip ===================================================================
/*void	AMateria::equip(AMateria *m)
{
	(void) m;
}*/

//==== unequip =================================================================
/*void	AMateria::unequip(int idx)
{
	(void) idx;
}*/
