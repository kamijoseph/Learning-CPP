
// return keyword
//  - returns a value back at the spot where you called the encompassing function

#include <iostream>

// functions declaration
double square(double length);
double cubed(double length);
std::string concatStrings(std::string string1, std::string string2);

int main(){

    double length = 5.0;
    double area = square(length);
    double volume = cubed(length);

    std::string firstName = "Kami";
    std::string secondName = "Joseph";
    std::string fullName = concatStrings(firstName, secondName);

    std::cout << "area: " << area << "cm^2\n";
    std::cout << "volume: " << volume << "cm^3\n";
    std::cout << "your full name is: " << fullName << "\n";

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

// concatenate strings function
std::string concatStrings(std::string string1, std::string string2){
    return string1 + " " + string2;
}

// notice the function is no longer void but double
// this is to match the results being returned