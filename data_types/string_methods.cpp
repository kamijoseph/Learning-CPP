
// common string methods
#include <iostream>

int main() {

    std::string name;
    std::string email;

    std::cout << "enter your name: ";
    std::getline(std::cin, name);

    // .length method - returns the length of a string
    std::cout << "the length of your name is " << name.length() << " characters long.\n";

    // .empty() - returns a boolean value if a string is empty or populated
    if (name.empty()) {
        std::cout << "you didnt enter your name pal\n";
    } else {
        std::cout << "hello " << name << "\n";
    }

    // .append() - joins a string to another one
    email = name.append("@gmail.com");
    std::cout << "your email is: " << name << "\n";

    return 0;
}