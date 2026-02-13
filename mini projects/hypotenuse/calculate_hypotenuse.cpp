
#include <iostream>
#include <cmath>

int main(){

    double a, b, c;
    
    std::cout << "enter length of the triangle: ";
    std::cin >> a;

    std::cout << "enter the height of the triangle: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(a, 2));
    std::cout << "the power of a triangle with height " << b << " and length " << a << " is " << c << "\n";


    return 0;
}