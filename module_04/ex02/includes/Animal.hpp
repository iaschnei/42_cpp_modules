#ifndef AAnimal_HPP
# define AAnimal_HPP

# include<string>

class AAnimal {

public:

  AAnimal();
  AAnimal(const AAnimal &copy);
  virtual ~AAnimal();

  AAnimal &operator=(const AAnimal &copy);
  std::string get_type(void) const;
  virtual void makeSound(void) const = 0;

protected:
  std::string type;
};

#endif
