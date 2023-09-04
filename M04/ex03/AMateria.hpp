/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:54:23 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/03 23:46:29 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP__
# include <iostream>
# include "Character.hpp"

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
};

#endif /*__AMATERIA_HPP__*/
