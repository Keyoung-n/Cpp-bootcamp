#include <iostream>
#include <cstdlib>

int main(int argc, char const *argv[]) {
  if (argc > 1) {
      if (((argv[1][0] >= 'A' && argv[1][0] <= 'Z') || (argv[1][0] >= 'a' && argv[1][0] <= 'z')) && argv[1][1] == '\0') {
        std::cout << "char: not displayable" << '\n';
        std::cout << "int: impossible" << '\n';
        std::cout << "float: nanf"<< '\n';
        std::cout << "double: nan" << '\n';
      }
      if(argv[1][0] >= '0' && argv[1][0] <= '9') {
        std::string lol(argv[1]);
        std::cout << "char: " << lol << '\n';
        std::cout << "int: " << std::atoi(argv[1]) << '\n';
        std::cout << "float: " << std::atof(argv[1]) << '\n';
        std::cout << "double: " << strtod(argv[1], NULL) << '\n';
      }
  }
  else {
    std::cout << "Please enter a number" << '\n';
  }
  return 0;
}
