#include <iostream>
#include <iomanip>
#include "includes/Contact.hpp"
#include "includes/PhoneBook.hpp"
#include "includes/Colors.hpp"

void        add_contact(PhoneBook *phonebook);
void        search_contact(PhoneBook *phonebook);
std::string truncate_str(std::string str);

int main(void) {
 
  std::string buffer;
  PhoneBook   phonebook;
 
  std::cout << MAGENTA << "Welcome to My Awesome Phonebook" << RESET << std::endl;
  while (true) {
    if (std::cin.eof())
      return (1);
    std::cout << MAGENTA <<"Please input a command (ADD, SEARCH or EXIT) !" << RESET << std::endl;
    std::getline(std::cin, buffer);
    if (buffer == "EXIT")
      break ;
    else if (buffer == "ADD")
      add_contact(&phonebook);
    else if (buffer == "SEARCH")
      search_contact(&phonebook);
  }

  return (0);
}

void  add_contact(PhoneBook *phonebook) {
  std::string buffer;

  std::cout << YELLOW;
  while (!std::cin.eof()) {
    std::cout << "  First name:     ";
    std::getline(std::cin, buffer);
    if (!buffer.empty()) {
      phonebook->contact_list[PhoneBook::get_index()].set_first_name(buffer);
      break ;
    }
  }

  while (!std::cin.eof()) {
    std::cout << "  Last name:      ";
    std::getline(std::cin, buffer);
    if (!buffer.empty()) {
      phonebook->contact_list[PhoneBook::get_index()].set_last_name(buffer);
      break ;
    }
  }

  while (!std::cin.eof()) {
    std::cout << "  Nickname:       ";
    std::getline(std::cin, buffer);
    if (!buffer.empty()) {
      phonebook->contact_list[PhoneBook::get_index()].set_nickname(buffer);
      break ;
    }
  }
 
  while (!std::cin.eof()) {
    std::cout << "  Phone number:   ";
    std::getline(std::cin, buffer);
    if (!buffer.empty()) {
      phonebook->contact_list[PhoneBook::get_index()].set_phone_number(buffer);
      break ;
    }
  }

  while (!std::cin.eof()) {
    std::cout << "  Darkest secret: ";
    std::getline(std::cin, buffer);
    if (!buffer.empty()) {
      phonebook->contact_list[PhoneBook::get_index()].set_darkest_secret(buffer);
      break ;
    }
  }
  std::cout << RESET;
  phonebook->incr_index();
}
 
void search_contact(PhoneBook *phonebook) {
  int         index;
  std::string buffer;

  index = 0;
  if (phonebook->contact_list[0].get_first_name().empty()) {
    std::cout << RED << "No contact added yet." << RESET << std::endl;
    return ;
  }
  std::cout.setf(std::cout.adjustfield, std::cout.right);
  while (index < 8 && !phonebook->contact_list[index].get_first_name().empty())
  {
    std::cout << CYAN << "|" << RESET;
    std::cout << CYAN << std::setw(10) << index << RESET;
    std::cout << CYAN << "|" << RESET;
    std::cout << CYAN << std::setw(10) << truncate_str(phonebook->contact_list[index].get_first_name()) << RESET;
    std::cout << CYAN << "|" << RESET;
    std::cout << CYAN << std::setw(10) << truncate_str(phonebook->contact_list[index].get_last_name()) << RESET;
    std::cout << CYAN << "|" << RESET;
    std::cout << CYAN << std::setw(10) << truncate_str(phonebook->contact_list[index].get_nickname()) << RESET;
    std::cout << CYAN << "|" << RESET;
    std::cout << std::endl;
    index++;
  }
  std::cout.unsetf(std::cout.adjustfield);

  while (!std::cin.eof() && buffer.length() != 1) {
    std::cout << BLUE << "Index to access: ";
    std::getline(std::cin, buffer);
  }
  std::cout << RESET;
  if (buffer.find_first_not_of("0123456789") != buffer.npos || buffer[0] > '7' || buffer[0] < '0'
    || phonebook->contact_list[buffer[0] - '0'].get_first_name().empty()) {
    std::cout << RED << "Invalid index" << RESET << std::endl;
    return ;
  } 
  std::cout << CYAN << "____________________________________________"<< RESET << std::endl;
  std::cout << CYAN << "First name: "<<phonebook->contact_list[buffer[0] - '0'].get_first_name() << RESET << std::endl;
  std::cout << CYAN << "Last name:  "<<phonebook->contact_list[buffer[0] - '0'].get_last_name() << RESET << std::endl;
  std::cout << CYAN << "Nickname:   "<<phonebook->contact_list[buffer[0] - '0'].get_nickname() << RESET << std::endl;
  std::cout << CYAN << "Phone num:  "<<phonebook->contact_list[buffer[0] - '0'].get_phone_number() << RESET << std::endl;
  std::cout << CYAN << "Secret:     "<<phonebook->contact_list[buffer[0] - '0'].get_darkest_secret() << RESET << std::endl;
  std::cout << CYAN << "____________________________________________"<< RESET << std::endl;
}

std::string truncate_str(std::string str)
{
    if (str.length() > 10)
            return (str.substr(0, 9) + ".");
    return (str);
}
