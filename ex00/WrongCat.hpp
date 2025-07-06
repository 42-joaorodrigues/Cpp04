#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
private:
    char*   _memTest; // Leak Test
public:
    WrongCat();
    WrongCat(const WrongCat& src);
    WrongCat& operator=(const WrongCat& src);
    ~WrongCat();

    void    makeSound() const;
};

#endif //WRONGCAT_HPP
