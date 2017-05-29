#include "Bureaucrat.hpp"

int main() {
  Bureaucrat new_bureaucrat("MR Hm", 3);

  std::cout << new_bureaucrat << '\n';
  try
  {
    new_bureaucrat.decrementGrade();
    new_bureaucrat.incrementGrade();
    new_bureaucrat.incrementGrade();
    new_bureaucrat.incrementGrade();
  }
  catch (Bureaucrat::GradeTooHighException &e)
  {
    std::cout << "it worked!" << '\n';
  }

  return 0;
}
