
// fizzbuzz

#include <iostream>

bool isDivisibleBy(int num, int divisor) {
    return num % divisor == 0;
}


int main() {

    int num;
    std::cout << "input a number: ";
    std::cin >> num;

    if (!std::cin) {
        std::cout << "Invalid entry! Please enter an integer.\n";
    }

    if (isDivisibleBy(num, 3) && isDivisibleBy(num, 5)) {
        std::cout << "FizzBuzz\n";
    } else if (isDivisibleBy(num, 3)) {
        std::cout << "Fizz\n";
    } else if (isDivisibleBy(num, 5)) {
        std::cout << "Buzz\n";
    } else {
        std::cout << num << "\n";
    }


    return 0;
}