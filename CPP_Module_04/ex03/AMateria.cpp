#include "AMateria.hpp"
#include "iostream"

AMateria::AMateria() {
    // std::cout << "AMateria Default Constructor Called" << std::endl;
}

AMateria::AMateria(const AMateria& src) {
    // std::cout << "AMateria Copy Constructor Called" << std::endl;
    *this = src;
}

AMateria& AMateria::operator=(const AMateria& src) {
    // std::cout << "AMateria Assignation Operator Called" << std::endl;
    if (this != &src) {
        this->_type = src._type;
    }
    return *this;
}

AMateria::~AMateria() {
    // std::cout << "AMateria Destructor Called" << std::endl;
}

AMateria::AMateria(const std::string& type) : _type(type) {
    // std::cout << "AMateria Type Constructor Called" << std::endl;
}

const std::string& AMateria::getType() const {
    return this->_type;
}

void AMateria::use(ICharacter& target) {
    (void)target;
}
