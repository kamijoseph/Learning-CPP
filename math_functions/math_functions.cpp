
#include <iostream>
#include <cmath>

int main(){

    double x = 3.14;
    double y = 4;

    // max function: returns the greater
    double maxNum = std::max(x, y);
    std::cout << "largest value is " << maxNum << "\n";

    // min function: returns smallest
    double minNum = std::min(x, y);
    std::cout << "smallest value is " << minNum << "\n";

    // pow function
    double power = pow(2, 5);
    std::cout << "power is " << power << "\n";

    // square root
    double squareRoot = sqrt(y);
    std::cout << "the square root of " << y << " is " << squareRoot << "\n";

    // rounding down
    double roundedDown = round(x);
    std::cout << "rounded down is " << roundedDown << "\n";

    // rounding up
    double roundedUp = ceil(x);
    std::cout << "rounded up is " << roundedUp << "\n";

    return 0;
}