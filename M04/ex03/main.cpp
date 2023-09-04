/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:10:28 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/04 20:41:32 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "AMateria.hpp"
# include "MateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

//==== Main Function ===========================================================
int	main(void)
{
	IMateriaSource	*src = new MateriaSource();
	ICharacter		*me = new Character("oussama");
	AMateria		*tmp;

	(void) me;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	tmp = src->createMateria("ice");
	std::cout << "Address: " << tmp << std::endl;
	std::cout << "Type: " << tmp->getType() << std::endl;
	tmp = src->createMateria("cure");
	std::cout << "Address: " << tmp << std::endl;
	std::cout << "Type: " << tmp->getType() << std::endl;
		
	return (EXIT_SUCCESS);
}
