#include <iostream>
#include <string>

template <typename A, typename L, typename F>
void iter (A array, L length, F function)  {
  for (int i = 0; i < length; i++) {
    function(array[i]);
  }
}

void toUpper(char &c) {
  c -= 32;
}

void increment(int &i) {
  i++;
}

int main() {
  int numbers[5] = {1, 2, 3, 4, 5};
  char chars[3] = {'a', 'b', 'c'};

  std::cout << "Numbers Before: ";
  for (int i = 0; i < 5; i++) {
    std::cout << numbers[i];
  }
  std::cout << '\n';

  iter(numbers, 5, increment);
  std::cout << "Numbers After: ";
  for (int i = 0; i < 5; i++) {
    std::cout << numbers[i];
  }
  std::cout << '\n';

  std::cout << "Chars Before: ";
  for (int i = 0; i < 3; i++) {
    std::cout << chars[i];
  }
  std::cout << '\n';

  iter(chars, 3, toUpper);
  std::cout << "Chars After: ";
  for (int i = 0; i < 3; i++) {
    std::cout << chars[i];
  }
  std::cout << '\n';
  return 0;
}
