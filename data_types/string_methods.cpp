
// common string methods
#include <iostream>

int main() {

    std::string name;

    std::cout << "enter your name: ";
    std::getline(std::cin, name);

    // .length method - returns the length of a string
    std::cout << "the length of your name is " << name.length() << " characters long.\n";

    // .empty() - returns a boolean value if a string is empty or populated
    std::cout << "the string is empty: " << name.empty() <<"\n";

    return 0;
}