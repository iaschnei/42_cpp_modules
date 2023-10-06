#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include<string>

class WrongAnimal {

public:

  WrongAnimal();
  WrongAnimal(const WrongAnimal &copy);
  ~WrongAnimal();

  WrongAnimal &operator=(const WrongAnimal &copy);
  std::string get_type(void) const;
  void makeSound(void) const;

protected:
  std::string type;
};

#endif
