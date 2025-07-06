#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>

class Brain {
private:
    int         _idea_index;
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain& src);
    Brain& operator=(const Brain& src);
    ~Brain();

    void        setIdea(const std::string& idea);
    std::string getIdea(int index) const;
};

#endif //BRAIN_HPP
