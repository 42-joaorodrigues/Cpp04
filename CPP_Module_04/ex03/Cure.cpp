#include "Cure.hpp"
#include "iostream"

Cure::Cure() : AMateria("cure") {
    // std::cout << "Cure Default Constructor Called" << std::endl;
}

Cure::Cure(const Cure& src) : AMateria(src) {
    // std::cout << "Cure Copy Constructor Called" << std::endl;
}

Cure& Cure::operator=(const Cure& src) {
    // std::cout << "Cure Assignation Operator Called" << std::endl;
    if (this != &src) {
        AMateria::operator=(src);
    }
    return *this;
}

Cure::~Cure() {
    // std::cout << "Cure Destructor Called" << std::endl;
}
// Canonical - END

AMateria* Cure::clone() const {
    return new Cure(*this);
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
