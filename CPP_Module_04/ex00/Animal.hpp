#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
protected:
    std::string _type;
public:
    Animal();
    Animal(const Animal& src);
    Animal& operator=(const Animal& src);
    virtual ~Animal(); // virtual so that Cat Destructor gets called

    std::string getType() const;

    virtual void    makeSound() const; // Virtual so that Children can overwrite this in Polymorphism
};

#endif //ANIMAL_HPP
