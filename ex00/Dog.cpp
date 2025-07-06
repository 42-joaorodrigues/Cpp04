#include "Dog.hpp"
#include "iostream"

// Canonical - START
Dog::Dog() : Animal() {
    std::cout << "Dog Default Constructor Called" << std::endl;
    this->_type = "Dog";
}

Dog::Dog(const Dog& src) : Animal(src) {
    std::cout << "Dog Copy Constructor Called" << std::endl;
    this->_type = src._type;
}

Dog& Dog::operator=(const Dog& src) {
    std::cout << "Dog Assignation Operator Called" << std::endl;
    if (this != &src) {
        Animal::operator=(src);
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog Destructor Called" << std::endl; 
}
// Canonical - END

void Dog::makeSound() const {
    std::cout << "*Should I Ouff now?*" << std::endl;
}

