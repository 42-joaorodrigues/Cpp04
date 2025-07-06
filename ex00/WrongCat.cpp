#include "WrongCat.hpp"
#include "iostream"

// Canonical - START
WrongCat::WrongCat() : WrongAnimal() {
    std::cout << "WrongCat Default Constructor Called" << std::endl;
    this->_type = "WrongCat";
    this->_memTest = new char[69]; // Alloc for Polymorphism test
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src) {
    std::cout << "WrongCat Copy Constructor Called" << std::endl;
    this->_memTest = new char[69]; // Alloc for Polymorphism test
}

WrongCat& WrongCat::operator=(const WrongCat& src) {
    std::cout << "WrongCat Assignation Operator Called" << std::endl;
    if (this != &src) {
        WrongAnimal::operator=(src);
    }
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat Destructor Called" << std::endl;
    delete[] this->_memTest; // Free for Polymorphism test
}
// Canonical - END

void WrongCat::makeSound() const {
    std::cout << "*Godzilla sound*" << std::endl;
}
