
//  simple arithmetic calculator

#include <iostream>

int main() {
    int num1, num2;
    char oper;

    // first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    // get operator
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> oper;

    // second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    return 0;
}