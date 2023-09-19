#include <iostream>
#include "../includes/Contact.hpp"


Contact::Contact(void) {
  return ;
}

Contact::~Contact(void) {
  return ;
}


std::string Contact::get_first_name(void) const {
  return (this->_first_name);
}

std::string Contact::get_last_name(void) const {
  return (this->_last_name);
}

std::string Contact::get_nickname(void) const {
  return (this->_nickname);
}

std::string Contact::get_phone_number(void) const {
  return (this->_phone_number);
}

std::string Contact::get_darkest_secret(void) const {
  return (this->_darkest_secret);
}


void Contact::set_first_name(std::string new_str) {
  this->_first_name = new_str;
  return ;
}
void Contact::set_last_name(std::string new_str) {
  this->_last_name = new_str;
  return ;
}
void Contact::set_nickname(std::string new_str) {
  this->_nickname = new_str;
  return ;
}
void Contact::set_phone_number(std::string new_str) {
  this->_phone_number = new_str;
  return ;
}
void Contact::set_darkest_secret(std::string new_str) {
  this->_darkest_secret = new_str;
  return ;
}

