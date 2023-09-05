/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:25:04 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/05 22:16:58 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __CAT_HPP__
# define __CAT_HPP__
# include "Animal.hpp"

class	Cat: public Animal
{
	public:
		Cat(void);
		Cat(const Cat& cat);
		~Cat(void);

		Cat&	operator= (const Cat& cat);
		
		void	makeSound(void) const;
};

#endif /*__CAT_HPP__*/
