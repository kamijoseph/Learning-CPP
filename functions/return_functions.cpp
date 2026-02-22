
// return keyword
//  - returns a value back at the spot where you called the encompassing function

#include <iostream>

// function declaration
double square(double length);

int main(){

    double length = 5.0;
    double area = square(length);

    std::cout << "area: " << area << "cm^2\n";

    return 0;
}

// square function
double square(double length){
    return length * length;
}

// notice the function is no longer void but double
// this is to match the results being returned