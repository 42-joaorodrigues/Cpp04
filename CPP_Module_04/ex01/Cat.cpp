#include "Cat.hpp"
#include "iostream"

// Canonical - START
Cat::Cat() : Animal() {
    std::cout << "Cat Default Constructor Called" << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain;
}

Cat::Cat(const Cat& src) : Animal(src) {
    std::cout << "Cat Copy Constructor Called" << std::endl;
    this->_brain = new Brain(*src._brain);
}

Cat& Cat::operator=(const Cat& src) {
    std::cout << "Cat Assignation Operator Called" << std::endl;
    Animal::operator=(src);
    if (this != &src) {
        delete this->_brain;
        this->_brain = new Brain(*src._brain);
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat Destructor Called" << std::endl;
    delete this->_brain;
}
// Canonical - END

void Cat::makeSound() const {
    std::cout << "*Meow?? (give me food)*" << std::endl;
}

void Cat::setIdea(const std::string& idea) {
    this->_brain->setIdea(idea);
}

std::string Cat::getIdea(int index) const {
    return this->_brain->getIdea(index);
}
