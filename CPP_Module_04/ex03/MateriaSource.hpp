#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
private:
    AMateria*   _template[4];
public:
    MateriaSource();
    MateriaSource(const MateriaSource& src);
    MateriaSource& operator=(const MateriaSource& src);
    ~MateriaSource();

    void learnMateria(AMateria*);
    AMateria* createMateria(const std::string& type);
};

#endif //MATERIASOURCE_HPP
