
//  simple arithmetic calculator

#include <iostream>

int main() {
    double num1, num2;
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

    // checking validity
    if (!std::cin) {
        std::cout << "Invalid Entry";
        return 1;
    }

    if (oper == '+') {
        std::cout << "results: " << num1 + num2 << "\n";
    } else if (oper == '-') {
        std::cout << "results: " << num1 - num2 << "\n";
    } else if (oper == '*') {
        std::cout << "results: " << num1 * num2 << "\n";
    } else if (oper == '/') {
        if (num2 == 0) {
            std::cout << "division by zero error\n";
        } else {
            std::cout << "results: " << num1 / num2 << "\n";
        }
    } else {
        std::cout << "invalid operator\n";
    }

    return 0;
}