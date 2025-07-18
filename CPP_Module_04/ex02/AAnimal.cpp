#include "AAnimal.hpp"
#include "iostream"

// Canonical - START
AAnimal::AAnimal() {
    std::cout << "AAnimal Default Constructor Called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& src) {
    std::cout << "AAnimal Copy Constructor Called" << std::endl;
    *this = src;
}

AAnimal& AAnimal::operator=(const AAnimal& src) {
    std::cout << "AAnimal Assignation Operator Called" << std::endl;
    if (this != &src)
        this->_type = src._type;
    return *this;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal Destructor Called" << std::endl;
}
// Canonical - END

std::string AAnimal::getType() const {
    return this->_type;
}
