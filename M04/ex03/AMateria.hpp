/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:54:23 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/03 21:09:07 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP__
# include <iostream>
# include "ICharacter.hpp"

class	AMateria
{
	protected:
		std::string	type;

	public:
		AMateria(void);
		AMateria(const AMateria& aMateria);
		virtual ~AMateria();

		AMateria&	operator=(const AMateria& aMateria);

		std::string const&	getType(void) const;
		virtual AMateria	*clone() const = 0;
		virtual	void		use(ICharacter& target);
	//	virtual	void		use(int idx, ICharacter& target);
	//	void				equip(AMateria *m);
	//	void				unequip(int idx);
};

#endif /*__AMATERIA_HPP__*/
