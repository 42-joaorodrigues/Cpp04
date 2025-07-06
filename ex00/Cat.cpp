#include "Cat.hpp"
#include "iostream"

// Canonical - START
Cat::Cat() : Animal() {
    std::cout << "Cat Default Constructor Called" << std::endl;
    this->_type = "Cat";
    this->_memTest = new char[69]; // Alloc for Polymorphism test
}

Cat::Cat(const Cat& src) : Animal(src) {
    std::cout << "Cat Copy Constructor Called" << std::endl;
    this->_memTest = new char[69]; // Alloc for Polymorphism test
}

Cat& Cat::operator=(const Cat& src) {
    std::cout << "Cat Assignation Operator Called" << std::endl;
    if (this != &src) {
        Animal::operator=(src);
        delete[] this->_memTest;
        this->_memTest = src._memTest;
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat Destructor Called" << std::endl;
    delete[] this->_memTest; // Free for Polymorphism test
}
// Canonical - END

void Cat::makeSound() const {
    std::cout << "*Meow?? (give me food)*" << std::endl;
}

