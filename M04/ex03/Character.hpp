/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 22:47:47 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/03 23:42:05 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__
# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Character : public ICharacter
{
	private:
		std::string	name;
		AMateria	**inventory;
		int			slot;

	public:
		Character(void);
		Character(std::string name);
		Character(const Character& character);
		~Character();

		Character&	operator=(const Character& character);

		std::string const&	getName(void) const;
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif
