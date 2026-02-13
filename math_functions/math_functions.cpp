
#include <iostream>

int main(){

    double x = 3;
    double y = 4;

    // max function: returns the greater
    double maxNum = std::max(x, y);
    std::cout << "largest value is " << maxNum << "\n";

    // min function: returns smallest
    double minNum = std::min(x, y);
    std::cout << "smallest value is " << minNum << "\n";

    return 0;
}