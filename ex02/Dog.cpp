#include "Dog.hpp"
#include "iostream"

// Canonical - START
Dog::Dog() : AAnimal() {
    std::cout << "Dog Default Constructor Called" << std::endl;
    this->_type = "Dog";
    this->_brain = new Brain;
}

Dog::Dog(const Dog& src) : AAnimal(src) {
    std::cout << "Dog Copy Constructor Called" << std::endl;
    this->_brain = new Brain(*src._brain);
}

Dog& Dog::operator=(const Dog& src) {
    std::cout << "Dog Assignation Operator Called" << std::endl;
    AAnimal::operator=(src);
    if (this != &src) {
        delete this->_brain;
        this->_brain = new Brain(*src._brain);
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog Destructor Called" << std::endl;
    delete this->_brain;
}
// Canonical - END

void Dog::makeSound() const {
    std::cout << "*Should I Ouff now?*" << std::endl;
}

void Dog::setIdea(const std::string& idea) {
    this->_brain->setIdea(idea);
}

std::string Dog::getIdea(int index) const {
    return this->_brain->getIdea(index);
}
