# C++ Module 04

## 📘 Project Overview

**C++ Module 04** focuses on **subtype polymorphism, abstract classes, and interfaces** in C++. This module introduces object-oriented programming concepts including inheritance, virtual functions, and abstract base classes to understand how polymorphism works in C++.

> **Disclaimer:**  
> This document is an unofficial summary written for educational and documentation purposes.  
> It is not affiliated with or endorsed by 42 or its partners.  
> All 42 students are responsible for adhering to the academic integrity policy.  
> You may **not** publish or share any part of the official subject PDF, evaluation scripts, or Moulinette content.

---

## Contents

- [Goals](#goals)
- [General Requirements](#general-requirements)
- [Exercise 00 - Polymorphism](#exercise-00---polymorphism)
- [Exercise 01 - I don't want to set the world on fire](#exercise-01---i-dont-want-to-set-the-world-on-fire)
- [Exercise 02 - Abstract class](#exercise-02---abstract-class)
- [Exercise 03 - Interface & recap](#exercise-03---interface--recap)
- [Submission Guidelines](#submission-guidelines)

---

## Goals

- Understand and implement **subtype polymorphism** in C++.
- Learn to create and use **abstract classes** and **interfaces**.
- Master **virtual functions** and **virtual destructors**.
- Implement proper **deep copy** mechanisms.
- Understand memory management with inheritance hierarchies.

---

## General Requirements

- Written in **C++98**, following good coding practices.
- Compile with `c++` and flags `-Wall -Wextra -Werror -std=c++98`.
- No memory leaks or undefined behavior.
- Classes must follow **Orthodox Canonical Form** unless stated otherwise.
- Use **UpperCamelCase** for class names.
- Include proper **include guards** in header files.
- No external libraries except standard library.
- Forbidden: `*printf()`, `*alloc()`, `free()`, `using namespace`, `friend`.

### Makefile

Must include rules:
- `all`, `clean`, `fclean`, `re`, `$(NAME)`

---

## Exercise 00 - Polymorphism

**Objective:** Implement basic inheritance and polymorphism.

### Requirements

- Create a base `Animal` class with:
  - Protected attribute: `std::string type`
  - Virtual member function: `makeSound()`
  - Getter for type: `getType()`

- Create derived classes:
  - `Dog` class inheriting from `Animal`
  - `Cat` class inheriting from `Animal`

- Each derived class must:
  - Set appropriate type in constructor ("Dog", "Cat")
  - Override `makeSound()` with appropriate sound

- Also implement **wrong** versions:
  - `WrongAnimal` base class
  - `WrongCat` derived class (should not use virtual functions)

### Key Concepts
- Virtual functions
- Polymorphism through base class pointers
- Proper constructor/destructor messages

---

## Exercise 01 - I don't want to set the world on fire

**Objective:** Implement deep copy and proper memory management.

### Requirements

- Create a `Brain` class with:
  - Array of 100 `std::string` called `ideas`

- Modify `Dog` and `Cat` classes to:
  - Have a private `Brain*` attribute
  - Create `Brain` in constructor with `new`
  - Delete `Brain` in destructor
  - Implement proper copy constructor and assignment operator for **deep copy**

- Test with:
  - Array of `Animal` pointers (half `Dog`, half `Cat`)
  - Proper deletion through base class pointers
  - Deep copy verification

### Key Concepts
- Deep vs shallow copy
- Virtual destructors
- Memory management in inheritance
- Copy constructor and assignment operator

---

## Exercise 02 - Abstract class

**Objective:** Create abstract base class that cannot be instantiated.

### Requirements

- Make the `Animal` class abstract by:
  - Making at least one pure virtual function
  - Preventing direct instantiation of `Animal`

- Option to rename class to `AAnimal` (with 'A' prefix)
- All existing functionality should work unchanged
- Only prevent `Animal` object creation

### Key Concepts
- Pure virtual functions (`= 0`)
- Abstract base classes
- Preventing instantiation while maintaining polymorphism

---

## Exercise 03 - Interface & recap

**Objective:** Implement interfaces and complex inheritance hierarchies.

### Requirements

#### AMateria Abstract Class
```cpp
class AMateria {
protected:
    [...]
public:
    AMateria(std::string const & type);
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};
```

#### Concrete Materia Classes
- `Ice` class: type "ice", use displays "* shoots an ice bolt at <name> *"
- `Cure` class: type "cure", use displays "* heals <name>'s wounds *"

#### ICharacter Interface
```cpp
class ICharacter {
public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};
```

#### Character Class
- Implement `ICharacter` interface
- Inventory of 4 `AMateria` slots
- Equip in first empty slot (0-3)
- `unequip()` does NOT delete the Materia
- Deep copy required

#### IMateriaSource Interface
```cpp
class IMateriaSource {
public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};
```

#### MateriaSource Class
- Learn up to 4 Materia templates
- Create new Materias from learned templates
- Return 0 for unknown types

### Key Concepts
- Interface design in C++
- Pure abstract classes
- Complex inheritance hierarchies
- Factory pattern implementation
- Memory management with interfaces

---

## Submission Guidelines

- Code must be submitted to the Git repository assigned by 42.
- Only the contents of the repository will be evaluated.
- Evaluation includes peer reviews.
- Exercise directories named: `ex00/`, `ex01/`, `ex02/`, `ex03/`
- Include comprehensive tests beyond the provided examples.

---

## Testing

For each exercise, provide complete tests including:
- Constructor/destructor message verification
- Polymorphism behavior testing
- Memory leak detection
- Deep copy verification
- Edge cases and error handling

---

## Final Note

This module is crucial for understanding C++ object-oriented programming.  
Master these concepts as they form the foundation for advanced C++ programming and design patterns.

**Note:** Exercise 03 is optional - you can pass the module without completing it.

---
