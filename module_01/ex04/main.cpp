#include <fstream>
#include <filesystem>
#include <iostream>
#include <bits/stdc++.h> 
#include "includes/Colors.hpp"

int main(int ac, char **av)
{
  if (ac != 4)
    return (std::cout << RED << "Wrong number of arguments." << RESET << std::endl, 1);

  std::string filename(av[1]);
  std::string s1(av[2]);
  std::string s2(av[3]);

  if (filename.length() == 0 || s1.length() == 0 || s2.length() == 0)
    return (std::cout << RED << "Error: empty argument(s)." << RESET << std::endl, 1);

  std::ifstream original(av[1]);
  if (!original || original.peek() == -1)
    return (std::cout << RED << "Couldn't read from file." << RESET << std::endl, 1);
  std::ofstream copy(strcat(av[1], ".replace"));
  if (!copy)
    return (original.close(), std::cout << RED << "Couldn't create copy file" << RESET << std::endl, 1);

  std::string content;
  content.assign((std::istreambuf_iterator<char>(original)), 
                 (std::istreambuf_iterator<char>()));

  size_t      pos  = 0;
  size_t      copy_pos = 0;

  while (true)
  {
    pos = content.find(s1, pos);
    if (pos == content.npos)
      break ;
    copy << content.substr(copy_pos, pos - copy_pos) << s2;
    pos += s1.length();
    copy_pos = pos;
  }
  copy << content.substr(copy_pos);
  
  original.close();
  copy.close();
  return (0);
}
