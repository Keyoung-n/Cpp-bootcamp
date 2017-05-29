#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( Bureaucrat & copy) {
  *this = copy;
}

Bureaucrat::Bureaucrat( void ) {
}

Bureaucrat::Bureaucrat ( std::string const   n, int i ) : name(n) {
  if (i > 0 )
    throw GradeTooHighException();
  else if ( i < 150 )
    throw GradeTooLowException();
    grade = i;
}

 Bureaucrat::~ Bureaucrat ( void ) {
}

 Bureaucrat &  Bureaucrat::operator=(  Bureaucrat & copy ) {
  if ( this != &copy ) {
    this->setGrade(copy.getGrade());
  }
  return *this;
}

void Bureaucrat::incrementGrade (void) {
  grade--;
  if (grade < 0)
    throw GradeTooHighException();
}

void Bureaucrat::decrementGrade (void) {
  grade++;
  if( grade < 150 )
    throw GradeTooLowException();
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
