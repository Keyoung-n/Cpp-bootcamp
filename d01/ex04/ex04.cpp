#include <iostream>
#include <string>

int main() {
    std::string string = "HI THIS IS BRAIN";
    const std::string *stringptr = &string;

    std::cout << *stringptr << std::endl;
    std::cout << string << std::endl;
}