#ifndef  BUREAUCRAT_HPP
#define  BUREAUCRAT_HPP
#include <string>
#include <iostream>
#include <exception>

class  Bureaucrat {
private:
  int grade;
  std::string const name;

public:
  Bureaucrat ( void );
  Bureaucrat ( std::string n, int i);
  Bureaucrat (  Bureaucrat & copy );
  Bureaucrat & operator=(  Bureaucrat & copy );
  ~Bureaucrat ( void );
  int getGrade( void );
  std::string const getName( void );
  void setGrade( int new_grade );
  void incrementGrade (void);
  void decrementGrade (void);
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
