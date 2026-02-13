
#include <iostream>
#include <cmath>

int main(){

    double a, b, c;
    
    std::cout << "enter length of the triangle: ";
    std::cin >> a;

    std::cout << "enter the height of the triangle: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "the hypotenuse of a triangle with length " << a << " and height " << b << " is " << c << "\n";


    return 0;
}