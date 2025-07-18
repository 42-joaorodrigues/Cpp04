#include "MateriaSource.hpp"
#include "iostream"

MateriaSource::MateriaSource() {
    // std::cout << "MateriaSource Default Constructor Called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_template[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& src) {
    // std::cout << "MateriaSource Copy Constructor Called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_template[i] = NULL;
    *this = src;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src) {
    // std::cout << "MateriaSource Assignation Operator Called" << std::endl;
    if (this != &src) {
        for (int i = 0; i < 4; i++) {
            delete this->_template[i];
            this->_template[i] = src._template[i] ? src._template[i]->clone() : NULL;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    // std::cout << "MateriaSource Destructor Called" << std::endl;
    for (int i = 0; i < 4; i++)
        delete this->_template[i];
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; i++)
        if (!this->_template[i]) {
            this->_template[i] = m;
            return ;
        }
    delete m;
}

AMateria* MateriaSource::createMateria(const std::string& type) {
    for (int i = 0; i < 4; i++)
        if (this->_template[i] && this->_template[i]->getType() == type)
            return this->_template[i]->clone();
    return NULL;
}
