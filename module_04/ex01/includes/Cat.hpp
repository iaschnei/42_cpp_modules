#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <string>

class Cat : public AAnimal {
public:

  Cat();
  Cat(const Cat &copy);
  Cat &operator=(const Cat &copy);
  ~Cat();
  virtual void makeSound(void) const;
  void print_brain(void) const;
  void change_idea(int i, std::string idea) const;

private:
    Brain *cat_brain;
};

#endif // !CAT_HPP
