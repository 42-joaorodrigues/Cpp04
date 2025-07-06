#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
private:
    Brain*  _brain;
public:
    Cat();
    Cat(const Cat& src);
    Cat& operator=(const Cat& src);
    ~Cat();

    void    makeSound() const;

    void        setIdea(const std::string& idea);
    std::string getIdea(int index) const;
};

#endif //CAT_HPP
