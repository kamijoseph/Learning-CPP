
#include <iostream>
int main(){

    // && - check if two conditions are true
    // || - check if atleast one condition is true
    // ! - reverse the logical state of its operand

    int temperature;
    bool sunny = false;

    std::cout << "enter the temperature: ";
    std::cin >> temperature;

    if (temperature > 0 && temperature < 30){
        std::cout << "the temperature is good\n";
    }
    else if (temperature > 100 || temperature < -20){
        std::cout << "super extreme temperatures\n";
    }
    else{
        std::cout << "the temperature is bad\n";
    }

    if (!sunny){
        std::cout << "it is cloudy outsidde\n";
    }
    else{
        std::cout << "it is sunnyy outside\n";
    }

    return 0;
}