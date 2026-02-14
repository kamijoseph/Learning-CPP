
#include <iostream>
int main(){

    // && - check if two conditions are true
    // || - check if atleast one condition is true
    // ! - reverse the logical state of its operand

    int temperature;

    std::cout << "enter the temperature: ";
    std::cin >> temperature;

    if (temperature > 0 && temperature < 30){
        std::cout << "the temperature is good\n";
    }
    else{
        std::cout << "the temperature is bad\n";
    }

    return 0;
}