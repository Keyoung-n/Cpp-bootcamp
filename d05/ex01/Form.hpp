#ifndef  BUREAUCRAT_HPP
#define  BUREAUCRAT_HPP
#include <string>
#include <iostream>
#include <exception>

class  Bureaucrat {
private:
  bool isSigned
  std::string const name;
  int const execgrade;
  int const sigengrade;

public:
  Bureaucrat ( void );
  Bureaucrat ( std::string n, int i);
  Bureaucrat (  Bureaucrat & copy );
  Bureaucrat & operator=(  Bureaucrat & copy );
  ~Bureaucrat ( void );
  int getGrade( void );
  std::string const getName( void );
  int getExecGrade;
  int getSignedGrade;
  class GradeTooHighException : public std::exception
  {
    public:
        virtual char const * what() const throw();
  };
  class GradeTooLowException : public std::exception
  {
    public:
        virtual char const * what() const throw();
  };
};

std::ostream & operator<<(std::ostream & o, Bureaucrat & rhs);
#endif
