#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <string>

class Dog : public Animal {
public:

  Dog();
  Dog(const Dog &copy);
  Dog &operator=(const Dog &copy);
  ~Dog();
  virtual void makeSound(void) const;

};

#endif // !CAT_HPP
