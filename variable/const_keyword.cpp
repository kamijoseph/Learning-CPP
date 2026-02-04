
// specifies that a variable is a constant and therefore shouldnt be modified at all (read-only)

#include <iostream>
int main() {
    // this program calculates the circumfrence
    const double pi = 3.14159;
    double radius = 10;
    double circumference = 2 * pi * radius;

    std::cout << circumference << "cm";

    return 0;
}