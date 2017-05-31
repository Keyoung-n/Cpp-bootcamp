#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( Bureaucrat & copy) {
  *this = copy;
}

Bureaucrat::Bureaucrat( void ) {
}

Bureaucrat::Bureaucrat ( std::string const   n, int i ) : name(n) {
  if (i < 1 )
    throw GradeTooHighException();
  else if ( i > 150 )
    throw GradeTooLowException();
    grade = i;
}

Bureaucrat::~ Bureaucrat ( void ) {
}

int  Bureaucrat::getGrade( void ){
  return grade;
}

std::string const Bureaucrat::getName( void ) {
  return name;
}

void  Bureaucrat::setGrade( int new_grade ) {
  grade = new_grade;
}
s
char const * Bureaucrat::GradeTooHighException::what() const throw()  {
  return "Your grade is too high";
}

char const * Bureaucrat::GradeTooLowException::what() const throw()  {
  return "Your grade is too low";
}

std::ostream & operator<<(std::ostream & o,  Bureaucrat & rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return o;
}
