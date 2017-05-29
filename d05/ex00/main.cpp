#include "Bureaucrat.hpp"

int main() {
  Bureaucrat new_bureaucrat("MR Hm", 1);

  std::cout << new_bureaucrat << '\n';
  try
  {
    //new_bureaucrat.decrementGrade();
    //new_bureaucrat.incrementGrade();
    //new_bureaucrat.incrementGrade();
    //new_bureaucrat.incrementGrade();
    new_bureaucrat.incrementGrade();
  }
  catch (const Bureaucrat::GradeTooHighException &e)
  {
    std::cout << e.what() << '\n';
  }

  return 0;
}
