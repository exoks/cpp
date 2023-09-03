/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:25:04 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/03 10:53:18 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __DOG_HPP__
# define __DOG_HPP__
# include "Animal.hpp"

class	Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog& dog);
		Dog&	operator= (const Dog& dog);
		~Dog();

		void	makeSound(void) const;
};

#endif /*__DOG_HPP__*/
