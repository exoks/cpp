/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 22:51:56 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/03 23:47:43 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

//==== Character Default Consturctor ===========================================
Character::Character(void) : name("undefind"), slot(-1)
{
	inventory = new AMateria*[4];
}

//==== Character Consturctor ===================================================
Character::Character(std::string name) : name(name), slot(-1)
{
	inventory = new AMateria*[4];
}

//==== Copy Consturctor ========================================================
Character::Character(const Character& character)
{
	(*this) = character;
}

//==== Character Destructor ====================================================
Character::~Character()
{
	int	i;

	i = -1;
	while (++i < 4)
		delete inventory[i];
	delete inventory;
}

//==== Copy Assignment Operator ================================================
Character&	Character::operator=(const Character& character)
{
	// neet to work on this operator
	slot = character.slot;
	name = character.name;
	return (*this);
}

// Interface functions :
//==== getName =================================================================
std::string	const& Character::getName(void) const
{
	return (name);
}

//==== use =====================================================================
void	Character::use(int index, ICharacter& target)
{
	(void) index;
	(void) target;
}

//==== unequip =================================================================
void	Character::equip(AMateria *m)
{
	(void) m;
}

//==== unequip =================================================================
void	Character::unequip(int idx)
{
	(void) idx;
}
