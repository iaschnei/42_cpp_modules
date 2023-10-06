#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <string>

class Dog : public AAnimal {
public:

  Dog();
  Dog(const Dog &copy);
  Dog &operator=(const Dog &copy);
  ~Dog();
  virtual void makeSound(void) const; 
  void print_brain(void) const;
  void change_idea(int i, std::string idea) const;

private:
    Brain *dog_brain;
};

#endif // !CAT_HPP
