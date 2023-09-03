/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:16:30 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/03 11:06:15 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__
# include <iostream>

class	WrongAnimal
{
	protected:
		std::string type;
	
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& wrongAnimal);
		WrongAnimal(std::string type);
		~WrongAnimal();
		
		WrongAnimal& operator=(const WrongAnimal& wrongAnimal);
	
		std::string	getType(void) const;
		void		setType(std::string type);
		void		makeSound(void) const;
};

#endif /*__WRONGANIMAL_HPP__*/
