cmake_minimum_required(VERSION 3.31)
project(Cpp04)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00 ex00/main.cpp
        ex00/Animal.cpp
        ex00/Animal.hpp
        ex00/Cat.cpp
        ex00/Cat.hpp
        ex00/Dog.cpp
        ex00/Dog.hpp
        ex00/WrongAnimal.cpp
        ex00/WrongAnimal.hpp
        ex00/WrongCat.cpp
        ex00/WrongCat.hpp)



add_executable(ex02 ex02/AAnimal.cpp ex02/AAnimal.hpp ex02/Brain.cpp ex02/Brain.hpp ex02/Cat.cpp ex02/Cat.hpp ex02/Dog.cpp ex02/Dog.hpp ex02/main.cpp ex02/Makefile)
add_executable(ex01 ex01/Animal.cpp ex01/Animal.hpp ex01/Brain.cpp ex01/Brain.hpp ex01/Cat.cpp ex01/Cat.hpp ex01/Dog.cpp ex01/Dog.hpp ex01/main.cpp ex01/Makefile)
add_executable(ex04 ex03/AMateria.cpp ex03/AMateria.hpp
        ex03/Cure.cpp
        ex03/Cure.hpp
        ex03/ICharacter.hpp
        ex03/Character.cpp
        ex03/Character.hpp
        ex03/IMateriaSource.hpp
        ex03/MateriaSource.cpp
        ex03/MateriaSource.hpp
        ex03/main.cpp)
