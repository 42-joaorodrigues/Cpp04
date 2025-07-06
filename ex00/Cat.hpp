#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
private:
    char* _memTest; // Test, if Animal Destructor is not virtual, Cat Destructor can't free this
public:
    Cat();
    Cat(const Cat& src);
    Cat& operator=(const Cat& src);
    ~Cat();

    void    makeSound() const;
};

#endif //CAT_HPP
