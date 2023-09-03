/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:25:04 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/03 10:53:40 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __CAT_HPP__
# define __CAT_HPP__
# include "Animal.hpp"

class	Cat: public Animal
{
	public:
		Cat();
		Cat(const Cat& cat);
		Cat&	operator= (const Cat& cat);
		~Cat();

		void	makeSound(void) const;
};

#endif /*__CAT_HPP__*/
