# C++ Module 04

![42 Badge](https://img.shields.io/badge/42-CPP_Module_04-brightgreen)
![C++ Badge](https://img.shields.io/badge/Language-C%2B%2B-blue)
![Status Badge](https://img.shields.io/badge/Status-Completed-success)

## What I Learned

Through this intermediate C++ project at 42 School, I developed key object-oriented programming skills:

- **Polymorphism** - Implemented virtual functions to enable runtime method resolution
- **Abstract classes** - Created pure virtual functions to define class interfaces
- **Inheritance hierarchies** - Built multi-level class relationships with proper behavior
- **Memory management** - Handled dynamic allocation with proper constructors/destructors
- **Deep copying** - Implemented proper deep copy mechanisms for complex objects
- **Interface design** - Created pure abstract classes to define object interfaces
- **Factory pattern** - Used the factory design pattern for object creation
- **Virtual destructors** - Ensured proper cleanup in inheritance hierarchies
- **Method overriding** - Specialized behavior in derived classes
- **Orthodox Canonical Form** - Followed C++ best practices for class construction

This project reinforced my understanding of core OOP principles and demonstrated the power of C++'s type system and runtime polymorphism.

## About the Project

C++ Module 04 focuses on subtype polymorphism, abstract classes, and interfaces. The project is divided into four exercises, each building on the concepts of the previous one:

1. **Polymorphism** - Base implementation of inheritance and virtual functions
2. **Deep Copying** - Memory management with complex objects
3. **Abstract Classes** - Preventing instantiation of base classes
4. **Interfaces** - Pure abstract classes and complex hierarchies

## Implementation Details

The module consists of four exercises with different classes demonstrating OOP principles:

### Exercise 00: Polymorphism

Implemented a basic inheritance hierarchy with:

- `Animal` base class with virtual `makeSound()` function
- `Dog` and `Cat` derived classes that override `makeSound()`
- `WrongAnimal` and `WrongCat` classes demonstrating incorrect polymorphism

### Exercise 01: Deep Copy with Brain

Extended the previous exercise with:

- `Brain` class containing an array of 100 `std::string` ideas
- Enhanced `Dog` and `Cat` classes to include a `Brain` pointer
- Proper memory management with constructors and destructors
- Deep copy implementation in copy constructors and assignment operators

### Exercise 02: Abstract Classes

Made the base class abstract:

- Renamed `Animal` to `AAnimal` (with 'A' prefix)
- Converted `makeSound()` to a pure virtual function
- Prevented direct instantiation while maintaining polymorphic behavior
- Maintained compatibility with existing derived classes

### Exercise 03: Interfaces & Material System

Implemented a complex material system with interfaces:

- `AMateria` abstract base class for material types
- `Ice` and `Cure` concrete material classes
- `ICharacter` interface for character objects
- `Character` concrete implementation with inventory management
- `IMateriaSource` interface for material creation
- `MateriaSource` factory implementation for creating materials

## Technical Challenges Overcome

- **Virtual function resolution** - Ensuring derived class methods are called through base class pointers
- **Memory leak prevention** - Implementing proper destructors for dynamic memory
- **Deep vs shallow copying** - Creating true independent copies of complex objects
- **Pure virtual functions** - Using abstract methods to define interfaces
- **Factory pattern implementation** - Creating objects dynamically based on string identifiers
- **Inventory management** - Handling arrays of pointers with proper ownership semantics

## Usage

Each exercise has its own directory with a Makefile:

```bash
# Navigate to an exercise
cd ex00

# Compile the program
make

# Run the executable
./animal

# Clean object files
make clean

# Remove all generated files
make fclean

# Rebuild
make re
```

## Code Examples

### Polymorphism (ex00)

```cpp
int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound(); // Will output the cat sound!
    j->makeSound(); // Will output the dog sound!
    meta->makeSound(); // Will output the animal sound!
    
    delete meta;
    delete j;
    delete i;
    
    return 0;
}
```

### Deep Copy (ex01)

```cpp
int main() {
    // Testing deep copy
    Dog* dog1 = new Dog();
    dog1->getBrain()->setIdea("I want to chase cats");
    
    Dog* dog2 = new Dog(*dog1); // Deep copy constructor
    
    // After deleting dog1, dog2 should still have access to its ideas
    delete dog1;
    
    std::cout << "Dog2's idea: " << dog2->getBrain()->getIdea(0) << std::endl;
    delete dog2;
    
    return 0;
}
```

### Abstract Class (ex02)

```cpp
int main() {
    // AAnimal* meta = new AAnimal(); // Would not compile - abstract class
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    
    j->makeSound(); // Dog sound
    i->makeSound(); // Cat sound
    
    delete j;
    delete i;
    
    return 0;
}
```

### Interfaces (ex03)

```cpp
int main() {
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    
    me->use(0, *bob); // "* shoots an ice bolt at bob *"
    me->use(1, *bob); // "* heals bob's wounds *"
    
    delete bob;
    delete me;
    delete src;
    
    return 0;
}
```

---

*This project was completed as part of the 42 School curriculum, demonstrating proficiency in C++ programming, object-oriented design, and polymorphism concepts.*

---

## License

This project is licensed under the [MIT License](./LICENSE).
