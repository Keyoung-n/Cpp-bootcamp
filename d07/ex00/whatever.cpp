#include <iostream>

template <typename Type>
void swap (Type &a, Type &b)  {
  Type c;
  c = a;
  a = b;
  b = c;
}

template <typename Type>
Type max(Type &a, Type &b) {
  if (a < b)
    return b;
  else if ( b < a)
    return a;
  else
    return b;
}

template <typename Type>
Type min(Type &a, Type &b) {
  if (a > b)
    return b;
  else if ( b > a)
    return a;
  else
    return b;
}

int main( void ) {
  int a = 2;
  int b = 3;
  ::swap( a, b );
  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
  std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
  std::string c = "chaine1";
  std::string d = "chaine2";
  ::swap(c, d);
  std::cout << "c = " << c << ", d = " << d << std::endl;
  std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
  std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
  return 0;
}
