
// do while loops - do some block of code first,
//                - then repeat again if condition is true

#include <iostream>

int main(){

    int number;

    // do this code once then check the condition
    do {
        std::cout << "enter a positive number: ";
        std::cin >> number;
    } while(number < 0);

    std::cout << "the numbr is: " << number << "\n";

    return 0;
}