#include "Ice.hpp"
#include "iostream"

Ice::Ice() : AMateria("ice") {
    // std::cout << "Ice Default Constructor Called" << std::endl;
}

Ice::Ice(const Ice& src) : AMateria(src) {
    // std::cout << "Ice Copy Constructor Called" << std::endl;
}

Ice& Ice::operator=(const Ice& src) {
    // std::cout << "Ice Assignation Operator Called" << std::endl;
    if (this != &src) {
        AMateria::operator=(src);
    }
    return *this;
}

Ice::~Ice() {
    // std::cout << "Ice Destructor Called" << std::endl;
}
// Canonical - END

AMateria* Ice::clone() const {
    return new Ice(*this);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
