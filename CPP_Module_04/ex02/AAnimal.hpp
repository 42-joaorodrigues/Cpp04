#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class AAnimal {
protected:
    std::string _type;
public:
    AAnimal();
    AAnimal(const AAnimal& src);
    AAnimal& operator=(const AAnimal& src);
    virtual ~AAnimal(); // virtual so that Cat Destructor gets called

    std::string getType() const;

    virtual void    makeSound() const = 0; // Virtual so that Children can overwrite this in Polymorphism
};

#endif //ANIMAL_HPP
