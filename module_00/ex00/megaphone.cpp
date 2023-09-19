#include <iostream>
#include <cctype>

int main(int ac, char **av){
  int arg_iter = 1;
  int char_iter;

  if (ac == 1){
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
  }
  while (av[arg_iter]){
    char_iter = 0;
    while (av[arg_iter][char_iter]){
      std::cout << (char)std::toupper(av[arg_iter][char_iter]);
      char_iter++;
    }
    arg_iter++;
  }
  std::cout << std::endl;
  return (0);
}
