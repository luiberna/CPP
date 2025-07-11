/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luiberna <luiberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:45:56 by luiberna          #+#    #+#             */
/*   Updated: 2024/10/23 23:16:17 by luiberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "--------FirstTest--------\n";
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
	std::cout << "-------SecondTest-------\n";
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
		std::cout << std::endl;
		
		Dali.printIdea(3);
		Mola.printIdea(2);

		Dali.setIdeas("I hate Mola", 3);
		Mola.setIdeas("I love Dali", 2);
		Dali.setIdeas("I want a bone to chew", 1);
		Mola.setIdeas("I want a toy to chew", 3);

		Dali.printIdea(3);
		Mola.printIdea(2);
		Dali.printIdea(1);
		Mola.printIdea(3);
	}
	std::cout << std::endl;
	std::cout << "-------ThirdTest-------\n";
	{
		const WrongAnimal* animalEstranho = new WrongCat();
		std::cout << animalEstranho->getType() << std::endl;
		animalEstranho->makeSound();
		delete animalEstranho;
	}

	
	return 0;
}