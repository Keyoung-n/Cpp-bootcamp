#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include <string>
#include <iomanip>

int contacts_count = 0;

void add();

void search();

class contact {
  private:


  public:
    void display(int index);
    void print();

    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string login;
    std::string postal_address;
    std::string email_address;
    std::string birthday;
    std::string date;
    std::string favorite_meal;
    std::string underwear_color;
    std::string darkest_secret;
};

contact contacts[8];
#endif
