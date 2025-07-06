#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

static const char*	bold = "\033[1m";
static const char*	reset = "\033[0m";

template <typename T>
void	constructors() {
	std::cout << bold << "0. - DEFAULT CONSTRUCTOR" << reset << std::endl;
	T	t1;
	std::cout << "Type: " << t1.getType() << std::endl;
	t1.makeSound();

	std::cout << bold << "1. - COPY CONSTRUCTOR" << reset << std::endl;
	T	t2(t1);
	std::cout << "Type: " << t2.getType() << std::endl;
	t2.makeSound();

	std::cout << bold << "2. - ASSIGNING OPERATOR" << reset << std::endl;
	t2 = t1;
	std::cout << "Type: " << t2.getType() << std::endl;
	t2.makeSound();

	std::cout << bold << "3. - DESTRUCTOR" << reset << std::endl;
}

template <typename T>
void	manualMemoryManagement() {
	T*	t1 = new T();
	std::cout << "Type: " << t1->getType() << std::endl;
	t1->makeSound();
	delete t1;
}

template <typename A, typename T>
void	polymorphism() {
	A*	a1 = new T();
	std::cout << "Type: " << a1->getType() << std::endl;
	a1->makeSound();
	delete a1;
}

void	zoo() {
	Animal* zoo[3];
	zoo[0] = new Animal;
	zoo[1] = new Cat;
	zoo[2] = new Dog;

	for (int i = 0; i < 3; i++) {
		std::cout << "Type: " << zoo[i]->getType() << std::endl;
		zoo[i]->makeSound();
	}

	for (int i = 0; i < 3; ++i)
		delete zoo[i];
}

template <typename A, typename C>
void	subject() {
	const A* meta = new A();
	const Animal* j = new Dog();
	const A* i = new C();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
}

int main() {
	// std::cout << bold << "0 - ANIMAL" << reset << std::endl;
	// std::cout << bold << "0.0 - ANIMAL CONSTRUCTORS" << reset << std::endl;
	// constructors<Animal>();
	// std::cout << bold << "0.1 - ANIMAL MANUAL MEMORY MANAGEMENT" << reset << std::endl;
	// manualMemoryManagement<Animal>();
	//
	// std::cout << bold << "1 - CAT" << reset << std::endl;
	// std::cout << bold << "1.0 - CAT CONSTRUCTORS" << reset << std::endl;
	// constructors<Cat>();
	// std::cout << bold << "1.1 - CAT MANUAL MEMORY MANAGEMENT" << reset << std::endl;
	// manualMemoryManagement<Cat>();
	// std::cout << bold << "1.2 - CAT POLYMORPHISM" << reset << std::endl;
	// polymorphism<Animal, Cat>();
	//
	// std::cout << bold << "2. - DOG" << reset << std::endl;
	// std::cout << bold << "2.0. - DOG CONSTRUCTORS" << reset << std::endl;
	// constructors<Dog>();
	// std::cout << bold << "2.1. - DOG MANUAL MEMORY MANAGEMENT" << reset << std::endl;
	// manualMemoryManagement<Dog>();
	// std::cout << bold << "2.2. - DOG POLYMORPHISM" << reset << std::endl;
	// polymorphism<Animal, Dog>();
	//
	// std::cout << bold << "3. - ANIMAL ZOO" << reset << std::endl;
	// zoo();

	std::cout << bold << "4. - ANIMAL SUBJECT" << reset << std::endl;
	subject<Animal, Cat>();

	// std::cout << bold << "5 - WRONG ANIMAL" << reset << std::endl;
	// std::cout << bold << "5.0 - WRONG ANIMAL CONSTRUCTORS" << reset << std::endl;
	// constructors<WrongAnimal>();
	// std::cout << bold << "5.1 - WRONG ANIMAL MANUAL MEMORY MANAGEMENT" << reset << std::endl;
	// manualMemoryManagement<WrongAnimal>();

	// std::cout << bold << "6 - WRONG CAT" << reset << std::endl;
	// std::cout << bold << "6.0 - WRONG CAT CONSTRUCTORS" << reset << std::endl;
	// constructors<WrongCat>();
	// std::cout << bold << "6.1 - WRONG CAT MANUAL MEMORY MANAGEMENT" << reset << std::endl;
	// manualMemoryManagement<WrongCat>();
	// std::cout << bold << "6.2 - WRONG CAT POLYMORPHISM (LEAKS!)" << reset << std::endl;
	// polymorphism<WrongAnimal, WrongCat>(); // HAS LEAKS!

	// std::cout << bold << "7. - WRONG ANIMAL SUBJECT (LEAKS!)" << reset << std::endl;
	// subject<WrongAnimal, WrongCat>(); // HAS LEAKS!

	std::cout << bold << reset; // To not get unused variables
	return 0;
}
