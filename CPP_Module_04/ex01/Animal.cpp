#include "Animal.hpp"
#include "iostream"

// Canonical - START
Animal::Animal() {
    std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal(const Animal& src) {
    std::cout << "Animal Copy Constructor Called" << std::endl;
    *this = src;
}

Animal& Animal::operator=(const Animal& src) {
    std::cout << "Animal Assignation Operator Called" << std::endl;
    if (this != &src)
        this->_type = src._type;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal Destructor Called" << std::endl;
}
// Canonical - END

std::string Animal::getType() const {
    return this->_type;
}

void Animal::makeSound() const{
    std::cout << "*Generic animal sound*" << std::endl;
}
