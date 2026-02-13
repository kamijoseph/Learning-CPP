
#include <iostream>

int main(){

    // unspaced input (string)
    std::string name;
    std::cout << "what is your name?: ";
    std::cin >> name;

    // using getline(std::cin >> std::ws, var) function for spaced strings: ws - whitespaces
    std::string full_name;
    std::cout << "what is your full name: ";
    std::getline(std::cin >> std::ws, full_name);

    std::cout << "hello " << full_name << "\n";

    return 0;
}