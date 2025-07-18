cmake_minimum_required(VERSION 3.31)
project(Cpp04)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00 CPP_Module_04/ex00/main.cpp
		CPP_Module_04/ex00/Animal.cpp
		CPP_Module_04/ex00/Animal.hpp
		CPP_Module_04/ex00/Cat.cpp
		CPP_Module_04/ex00/Cat.hpp
		CPP_Module_04/ex00/Dog.cpp
		CPP_Module_04/ex00/Dog.hpp
		CPP_Module_04/ex00/Makefile
		CPP_Module_04/ex00/WrongAnimal.cpp
		CPP_Module_04/ex00/WrongAnimal.hpp
		CPP_Module_04/ex00/WrongCat.cpp
		CPP_Module_04/ex00/WrongCat.hpp)
add_executable(ex01 CPP_Module_04/ex01/Animal.cpp CPP_Module_04/ex01/Animal.hpp CPP_Module_04/ex01/Brain.cpp CPP_Module_04/ex01/Brain.hpp CPP_Module_04/ex01/Cat.cpp CPP_Module_04/ex01/Cat.hpp CPP_Module_04/ex01/Dog.cpp CPP_Module_04/ex01/Dog.hpp CPP_Module_04/ex01/main.cpp CPP_Module_04/ex01/Makefile)
add_executable(ex02 CPP_Module_04/ex02/AAnimal.cpp CPP_Module_04/ex02/AAnimal.hpp CPP_Module_04/ex02/Brain.cpp CPP_Module_04/ex02/Brain.hpp CPP_Module_04/ex02/Cat.cpp CPP_Module_04/ex02/Cat.hpp CPP_Module_04/ex02/Dog.cpp CPP_Module_04/ex02/Dog.hpp CPP_Module_04/ex02/main.cpp CPP_Module_04/ex02/Makefile)
add_executable(ex03 CPP_Module_04/ex03/AMateria.cpp CPP_Module_04/ex03/AMateria.hpp CPP_Module_04/ex03/Character.cpp CPP_Module_04/ex03/Character.hpp CPP_Module_04/ex03/Cure.cpp CPP_Module_04/ex03/Cure.hpp CPP_Module_04/ex03/Ice.cpp CPP_Module_04/ex03/Ice.hpp CPP_Module_04/ex03/ICharacter.hpp CPP_Module_04/ex03/IMateriaSource.hpp CPP_Module_04/ex03/main.cpp CPP_Module_04/ex03/Makefile CPP_Module_04/ex03/MateriaSource.cpp CPP_Module_04/ex03/MateriaSource.hpp)
