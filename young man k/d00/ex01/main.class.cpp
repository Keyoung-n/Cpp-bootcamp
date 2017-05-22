/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knage <knage@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 14:54:46 by knage             #+#    #+#             */
/*   Updated: 2017/05/22 15:12:38 by knage            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void trunc_string(std::string string) {
  if (string.length() > 10)
    std::cout << string.substr(0, 9) << '.';
  else
    std::cout << std::setw(10) << string;
}

void contact::display(int index) {
  std::cout << std::setw(10) << index << '|';
  trunc_string(this->first_name);
  std::cout << '|';
  trunc_string(this->last_name);
  std::cout << '|';
  trunc_string(this->nickname);
  std::cout << '\n';
}

void contact::print() {
  std::cout << "First name: ";
  std::cout << this->first_name;
  std::cout << "Last name: ";
  std::cout << this->last_name << std::endl;
  std::cout << "Nickname: ";
  std::cout << this->nickname << std::endl;
  std::cout << "Login: ";
  std::cout << this->login << std::endl;
  std::cout << "Postal Address: ";
  std::cout << this->postal_address << std::endl;
  std::cout << "Email Address: ";
  std::cout << this->email_address << std::endl;
  std::cout << "Birthday: ";
  std::cout << this->birthday << std::endl;
  std::cout << "Date: ";
  std::cout << this->date << std::endl;
  std::cout << "Favorite Meal: ";
  std::cout << this->favorite_meal << std::endl;
  std::cout << "Underwear Color: ";
  std::cout << this->underwear_color << std::endl;
  std::cout << "Darkest Secret:";
  std::cout << this->darkest_secret << std::endl;
}

std::string get_string() {
  std::string str;

  do {
    std::getline(std::cin, str);
    str.begin() = remove(str.begin(),str.end(),' ');
    str.erase(remove_if(str.begin(), str.end(), isspace), str.end());
  } while(str.empty());
  return str;
}

void add_contact(contact *new_contact) {
  std::cout << "Enter a first_name: ";
  new_contact->first_name = get_string();
  std::cout << "Enter a last_name: ";
  new_contact->last_name = get_string();
  std::cout << "Enter a nickname ";
  new_contact->nickname = get_string();
  std::cout << "Enter a login: ";
  new_contact->login = get_string();
  std::cout << "Enter a postal_address: ";
  new_contact->postal_address = get_string();
  std::cout << "Enter a email_address: ";
  new_contact->email_address = get_string();
  std::cout << "Enter a birthday: ";
  new_contact->birthday = get_string();
  std::cout << "Enter a date: ";
  new_contact->date = get_string();
  std::cout << "Enter a favorite_meal: ";
  new_contact->favorite_meal = get_string();
  std::cout << "Enter a underwear_color: ";
  new_contact->underwear_color = get_string();
  std::cout << "Enter a darkest_secret: ";
  new_contact->darkest_secret = get_string();
}

void add() {
  if (contacts_count != 8) {
    add_contact(&contacts[contacts_count]);
    contacts_count++;
  }
  else
    std::cout << "Your phonebook is full" << '\n';
}

void search() {
  char buff[10];
  std::cout << std::setw(10) << "INDEX";
  std::cout << '|';
  std::cout << std::setw(10) << "FIRST NAME";
  std::cout << '|';
  std::cout << std::setw(10) << "LAST NAME";
  std::cout << '|';
  std::cout << std::setw(10) << "NICKNAME";
  std::cout << std::endl;
  for (int i = 0; i < contacts_count; i++)
    contacts[i].display(i + 1);
  std::cout << "Please enter a index: ";
  std::cin >> buff;
  int index = buff[0] - '0';
  if (index > 0 && index < 9)
    contacts[index -1].print();
  else
    std::cout << "Please enter a valid index" << '\n';
}

int hub(std::string command) {
  if (command == "EXIT")
    return (1);
  else if (command == "ADD")
    add();
  else if (command == "SEARCH")
    search();
  return (0);
}

int main() {
  std::string command;

  std::cout << "please enter a command" << '\n';
  while (1) {
    std::cout << ">> ";
    std::cin >> command;
    if (hub(command) == 1)
      break;
  }
}
