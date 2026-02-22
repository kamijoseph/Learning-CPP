
// return keyword
//  - returns a value back at the spot where you called the encompassing function

#include <iostream>

// function declaration
double square(double length);
double cubed(double length);

int main(){

    double length = 5.0;
    double area = square(length);
    double volume = cubed(length);

    std::cout << "area: " << area << "cm^2\n";
    std::cout << "volume: " << volume << "cm^3\n";

    return 0;
}

// square function
double square(double length){
    return length * length;
}

// volume of a cube
double cubed(double length){
    return length * length * length;
}

// notice the function is no longer void but double
// this is to match the results being returned