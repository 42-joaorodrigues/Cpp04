#include "WrongAnimal.hpp"
#include "iostream"

// Canonical - START
WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal Default Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) {
    std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
    *this = src;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src) {
    std::cout << "WrongAnimal Assignation Operator Called" << std::endl;
    if (this != &src) {
        this->_type = src._type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal Destructor Called" << std::endl; 
}
// Canonical - END

std::string WrongAnimal::getType() const {
    return this->_type;
}

void WrongAnimal::makeSound() const {
    std::cout << "*Generic and somehow weirdly wrong animal sound*" << std::endl;
}

