#include "Character.hpp"
#include "AMateria.hpp"
#include "iostream"

Character::Character() : _binIndex(0) {
    // std::cout << "Character Default Constructor Called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    for (int i = 0; i < 100; i++)
        this->_bin[i] = NULL;
}

Character::Character(const Character& src) : _binIndex(0) {
    // std::cout << "Character Copy Constructor Called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    for (int i = 0; i < 100; i++)
        this->_bin[i] = NULL;
    *this = src;
}

Character& Character::operator=(const Character& src) {
    // std::cout << "Character Assignation Operator Called" << std::endl;
    if (this != &src) {
        this->_name = src._name;
        for (int i = 0; i < 4; i++) {
            delete this->_inventory[i];
            this->_inventory[i] = src._inventory[i] ? src._inventory[i]->clone() : NULL;
        }
        for (int i = 0; i < this->_binIndex; i++)
            delete this->_bin[i];
        this->_binIndex = 0;
        for (int i = 0; i < src._binIndex; i++)
            this->_bin[this->_binIndex++] = src._bin[i]->clone();
    }
    return *this;
}

Character::~Character() {
    // std::cout << "Character Destructor Called" << std::endl;
    for (int i = 0; i < 4; i++)
        delete this->_inventory[i];
    for (int i = 0; i < this->_binIndex; i++)
        delete this->_bin[i];
}

Character::Character(const std::string& name) : _name(name), _binIndex(0) {
    // std::cout << "Character Name Constructor Called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    for (int i = 0; i < 100; i++)
        this->_bin[i] = NULL;
}

const std::string& Character::getName() const {
    return this->_name;
}

void Character::equip(AMateria* m) {
    if (!m) return ;
    for (int i = 0; i < 4; i++)
        if (!this->_inventory[i]) {
            this->_inventory[i] = m;
            return ;
        }
    std::cout << "Inventory full. Cannot equip Materia." << std::endl;
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4) {
        if (_binIndex < 100)
            this->_bin[_binIndex++] = this->_inventory[idx];
        else
            std::cout << "Trash bin full. Cannot store unequipped Materia." << std::endl;
        this->_inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4 && this->_inventory[idx])
        this->_inventory[idx]->use(target);
}
