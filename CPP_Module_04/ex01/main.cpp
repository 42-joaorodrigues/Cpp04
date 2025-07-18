#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

static const char*	bold = "\033[1m";
static const char*	reset = "\033[0m";

void	animalConstructors() {
	std::cout << bold << "0. - DEFAULT CONSTRUCTOR" << reset << std::endl;
	Animal	t1;
	std::cout << "Type: " << t1.getType() << std::endl;
	std::cout << "Sound: ";
	t1.makeSound();

	std::cout << bold << "1. - COPY CONSTRUCTOR" << reset << std::endl;
	Animal	t2(t1);
	std::cout << "Type: " << t2.getType() << std::endl;
	std::cout << "Sound: ";
	t2.makeSound();

	std::cout << bold << "2. - ASSIGNING OPERATOR" << reset << std::endl;
	t2 = t1;
	std::cout << "Type: " << t2.getType() << std::endl;
	std::cout << "Sound: ";
	t2.makeSound();

	std::cout << bold << "3. - DESTRUCTOR" << reset << std::endl;
}

void	animalManualMemoryManagement() {
	Animal*	t1 = new Animal();
	std::cout << "Type: " << t1->getType() << std::endl;
	std::cout << "Sound: ";
	t1->makeSound();
	delete t1;
}

template <typename T>
void	brainConstructors() {
	std::cout << bold << "0. - DEFAULT CONSTRUCTOR" << reset << std::endl;
	T	t1;
	t1.setIdea("'I want food'");

	std::cout << "Type: " << t1.getType() << std::endl;
	std::cout << "Sound: ";
	t1.makeSound();
	std::cout << "Ideas: ";
	for (int i = 0; !t1.getIdea(i).empty(); i++)
		std::cout << t1.getIdea(i) << " ";
	std::cout << std::endl;

	std::cout << bold << "1. - COPY CONSTRUCTOR" << reset << std::endl;
	t1.setIdea("'When will father be back'");
	T	t2(t1);
	std::cout << "Type: " << t2.getType() << std::endl;
	std::cout << "Sound: ";
	t2.makeSound();
	std::cout << "Ideas: ";
	for (int i = 0; !t1.getIdea(i).empty(); i++)
		std::cout << t1.getIdea(i) << " ";
	std::cout << std::endl;

	std::cout << bold << "2. - ASSIGNING OPERATOR" << reset << std::endl;
	t1.setIdea("'Why is she squishing me'");
	t2 = t1;
	std::cout << "Type: " << t2.getType() << std::endl;
	std::cout << "Sound: ";
	t2.makeSound();
	std::cout << "Ideas: ";
	for (int i = 0; !t1.getIdea(i).empty(); i++)
		std::cout << t1.getIdea(i) << " ";
	std::cout << std::endl;

	std::cout << bold << "3. - DESTRUCTOR" << reset << std::endl;
}

template <typename T>
void	brainManualMemoryManagement() {
	T*	t1 = new T();
	t1->setIdea("'I want food'");

	std::cout << "Type: " << t1->getType() << std::endl;
	std::cout << "Sound: ";
	t1->makeSound();
	std::cout << "Ideas: ";
	for (int i = 0; !t1->getIdea(i).empty(); i++)
		std::cout << t1->getIdea(i) << " ";
	std::cout << std::endl;
	delete t1;
}

template <typename T>
void	polymorphism() {
	Animal*	a1 = new T();
	std::cout << "Type: " << a1->getType() << std::endl;
	std::cout << "Sound: ";
	a1->makeSound();
	delete a1;
}

void	zoo() {
	Animal* zoo[6];

	for (int i = 0; i < 3; i++)
			zoo[i] = new Cat;
	for (int i = 3; i < 6; i++)
			zoo[i] = new Dog;

	for (int i = 0; i < 6; i++) {
		std::cout << "Type: " << zoo[i]->getType() << std::endl;
		std::cout << "Sound: ";
		zoo[i]->makeSound();
	}

	for (int i = 0; i < 6; ++i)
		delete zoo[i];
}

template<typename T>
void	deepCopy() {
	T	c1;
	c1.setIdea("'I want food'");

	T c2(c1);
	c2.setIdea("'When will father be back'");

	std::cout << "c1 Ideas: ";
	for (int i = 0; !c1.getIdea(i).empty(); i++)
		std::cout << c1.getIdea(i) << " ";
	std::cout << std::endl;

	std::cout << "c2 Ideas: ";
	for (int i = 0; !c2.getIdea(i).empty(); i++)
		std::cout << c2.getIdea(i) << " ";
	std::cout << std::endl;
}

void	subject() {
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;
}

int main() {
	// std::cout << bold << "0 - ANIMAL" << reset << std::endl;
	// std::cout << bold << "0.0 - ANIMAL CONSTRUCTORS" << reset << std::endl;
	// animalConstructors();
	// std::cout << bold << "0.1 - ANIMAL MANUAL MEMORY MANAGEMENT" << reset << std::endl;
	// animalManualMemoryManagement();
	//
	// std::cout << bold << "1 - CAT" << reset << std::endl;
	// std::cout << bold << "1.0 - CAT CONSTRUCTORS" << reset << std::endl;
	// brainConstructors<Cat>();
	// std::cout << bold << "1.1 - CAT MANUAL MEMORY MANAGEMENT" << reset << std::endl;
	// brainManualMemoryManagement<Cat>();
	// std::cout << bold << "1.2 - CAT POLYMORPHISM" << reset << std::endl;
	// polymorphism<Cat>();
	// std::cout << bold << "1.3 - CAT DEEP COPY" << reset << std::endl;
	// deepCopy<Cat>();
	//
	// std::cout << bold << "2. - DOG" << reset << std::endl;
	// std::cout << bold << "2.0. - DOG CONSTRUCTORS" << reset << std::endl;
	// brainConstructors<Dog>();
	// std::cout << bold << "2.1. - DOG MANUAL MEMORY MANAGEMENT" << reset << std::endl;
	// brainManualMemoryManagement<Dog>();
	// std::cout << bold << "2.2. - DOG POLYMORPHISM" << reset << std::endl;
	// polymorphism<Dog>();
	// std::cout << bold << "2.3 - DOG DEEP COPY" << reset << std::endl;
	// deepCopy<Dog>();
	//
	// std::cout << bold << "3. - ANIMAL ZOO" << reset << std::endl;
	// zoo();
	//
	std::cout << bold << "4. - SUBJECT" << reset << std::endl;
	subject();

	std::cout << bold << reset; // To not get unused variables
	return 0;
}
