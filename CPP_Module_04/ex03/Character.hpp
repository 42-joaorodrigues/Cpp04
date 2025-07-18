#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter{
private:
    std::string _name;
    AMateria*   _inventory[4];
    AMateria*   _bin[100];
    int         _binIndex;
public:
    Character();
    Character(const Character& src);
    Character& operator=(const Character& src);
    ~Character();

    Character(const std::string& name);
    const std::string& getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif //CHARACTER_HPP
