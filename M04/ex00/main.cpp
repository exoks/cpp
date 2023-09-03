/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:23:26 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/03 12:37:28 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const Animal		*animal, *dog, *cat;

	std::cout	<< std::endl
				<< "=============== Main testes ===============" << std::endl;
	animal = new Animal();
	dog	= new Dog();
	cat = new Cat();
	dog->makeSound();
	cat->makeSound();
	animal->makeSound();
	delete animal;
	delete dog;
	delete cat;

	return (EXIT_SUCCESS);
}
