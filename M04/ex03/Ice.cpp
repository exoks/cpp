/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:37:41 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/03 21:54:11 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

//==== Ice Default Constructor =================================================
Ice::Ice(void)
{
	type = "ice";
	std::cout << "Ice Constructor Called" << std::endl;
}

//==== Ice Copy Constructor ====================================================
Ice::Ice(const Ice& ice)
{
	*this = ice;
}

//==== Ice Destructor ==========================================================
Ice::~Ice()
{
	std::cout << "Ice Destructor Called" << std::endl;
}

//==== Ice Copy Assignment Operator ============================================
Ice&	Ice::operator= (const Ice& ice)
{
	type = ice.type;
	return (*this);
}

//==== Ice Clone Overrideing ===================================================
Ice		*Ice::clone(void) const
{
	Ice	*ice;

	ice = new Ice();
	*ice = *this;
	return (ice);
}

//==== use =====================================================================
void	Ice::use(ICharacter& target)
{
	(void) target;
	std::cout << ":===> Ice " << std::endl;
}
