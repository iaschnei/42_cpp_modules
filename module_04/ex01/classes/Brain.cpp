#include "../includes/Brain.hpp"
#include "../includes/Colors.hpp"
#include <string>
#include <string.h>
#include <iostream>

Brain::Brain(void) {
    this->fill_ideas();
    std::cout << GREEN << "Brain constructor called" << RESET << std::endl;
}

Brain::Brain(const Brain &copy) {
    int iter = 0;
    
    while (iter < 100)
    {
        this->ideas[iter] = copy.ideas[iter];
        iter++;
    }
    std::cout << GREEN << "Brain copy constructor called" << RESET << std::endl;
}

Brain::~Brain(void) {
    std::cout << RED << "Brain destructor called" << RESET << std::endl;
}

Brain &Brain::operator=(const Brain &copy) {
    int iter = 0;
    
    while (iter < 100)
    {
        this->ideas[iter] = copy.ideas[iter];
        iter++;
    }
    std::cout << RED << "ENTERING HERE" << RESET << std::endl;
    return (*this);
}

void Brain::print_ideas(void) {
    int iter = 0;

    while (iter < 99)
    {
        std::cout << CYAN << this->ideas[iter] << ", ";
        iter++;
    }
    std::cout << CYAN << this->ideas[iter];
    std::cout << RESET << std::endl;
}

void Brain::fill_ideas(void) {
    int iter = 0;

    while (iter < 100)
    {
        if (iter %2 == 0)
            this->ideas[iter] = "Eat";
        else 
            this->ideas[iter] = "Sleep";
        iter++;
    }
}
