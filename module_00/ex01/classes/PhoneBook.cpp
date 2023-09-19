#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void) {
  return ;
}

PhoneBook::~PhoneBook(void) {
  return ;
}

int PhoneBook::get_index(void) {
  return (PhoneBook::_index);
}

void PhoneBook::incr_index(void) {
  if (PhoneBook::_index < 7)
    PhoneBook::_index += 1;
  else 
    PhoneBook::_index = 0;
}

int PhoneBook::_index = 0;
