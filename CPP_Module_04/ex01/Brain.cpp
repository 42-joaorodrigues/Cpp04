#include "Brain.hpp"
#include "iostream"

// Canonical - START
Brain::Brain() : _idea_index(0) {
    std::cout << "Brain Default Constructor Called" << std::endl;
}

Brain::Brain(const Brain& src) : _idea_index(src._idea_index) {
    std::cout << "Brain Copy Constructor Called" << std::endl;
    *this = src;
}

Brain& Brain::operator=(const Brain& src) {
    std::cout << "Brain Assignation Operator Called" << std::endl;
    if (this != &src) {
        _idea_index = src._idea_index;
        for (int i = 0; i < 100; i++)
            this->ideas[i] = src.ideas[i];
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain Destructor Called" << std::endl; 
}
// Canonical - END

void Brain::setIdea(const std::string& idea) {
    if (this->_idea_index >= 99) {
        std::cout << "Brain is full. Can't add more ideas" << std::endl;
        return ;
    }
    this->ideas[_idea_index++] = idea;
}

std::string Brain::getIdea(int index) const {
    if (index < 0 || index >= 99)
        return "";
    return ideas[index];
}
