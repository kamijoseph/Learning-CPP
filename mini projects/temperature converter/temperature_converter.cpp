
#include <iostream>

int main(){

    double temp;
    std::string unit;

    std::cout << "****** tmperature converter *****\n";
    std::cout << "F = fahrenheit\n";
    std::cout << "C = celsius\n";
    std::cout << "what unit would you like to convert to: ";
    std::cin >> unit;

    if (unit == "F" || unit == "f"){
        std::cout << "enter the temperature in celcius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "temperature is: " << temp << " fahrenheit\n\n";
    }
    else if (unit == "C" || unit == "c") {
        std::cout << "enter the temperature in fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "temperature is: " << temp << " celcius\n\n";
    }
    else {
        std::cout << "please enter in only C or F\n";
    }

    std::cout << "***************************************\n";


    return 0;
}