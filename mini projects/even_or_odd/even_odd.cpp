
// check number if even or odd

#include <iostream>

bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    int num;

    std::cout << "Enter your number: ";
    std::cin >> num;

    if (!std::cin) {
        std::cout << "Invalid Entry! Please enter an integer.\n";
        return 1;
    }

    if (isEven(num)) {
        std::cout << "Your number " << num << " is even.\n";
    } else {
        std::cout << "Your number " << num << " is odd.\n";
    }

    return 0;
}