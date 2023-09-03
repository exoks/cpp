/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:35:21 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/03 21:54:31 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __CURE_HPP__
# define __CURE_HPP__
# include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure& cure);
		~Cure();
		
		Cure&	operator= (const Cure& cure);

		Cure		*clone() const;
		void		use(ICharacter& target);
};

#endif /*__CURE_HPP__*/
