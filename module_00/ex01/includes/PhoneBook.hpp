#include "Contact.hpp"

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook {

public:
  PhoneBook(void);
  ~PhoneBook(void);
  
  Contact contact_list[8];
  static int  get_index(void);
  static void incr_index(void);

private:
  static int _index;
};

#endif
