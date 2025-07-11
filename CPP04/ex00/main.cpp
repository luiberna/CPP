/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:45:56 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/23 18:15:37 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	
	std::cout << std::endl;
	{
		Dog Dali;
		Cat Mola;
		Animal animal;

		std::cout << Dali.getType() << std::endl;
		Dali.makeSound();
		std::cout << Mola.getType() << std::endl;
		Mola.makeSound();
		std::cout << animal.getType() << std::endl;
		animal.makeSound();
	}
	std::cout << std::endl;
	{
		const WrongAnimal* animalEstranho = new WrongCat();
		std::cout << animalEstranho->getType() << std::endl;
		animalEstranho->makeSound();
		delete animalEstranho;
	}
	return 0;
}