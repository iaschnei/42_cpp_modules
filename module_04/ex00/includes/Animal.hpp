#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include<string>

class Animal {

public:

  Animal();
  Animal(const Animal &copy);
  ~Animal();

  Animal &operator=(const Animal &copy);
  std::string get_type(void) const;
  virtual void makeSound(void) const;

protected:
  std::string type;
};

#endif
