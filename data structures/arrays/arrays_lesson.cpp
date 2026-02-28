
// arrays
// data structure that can hold multiple values and values are accesed by an index number

#include <iostream>
int main(){

    // standard array
    std::string cars[] = {
        "corvette", "porsche", "jeep", "mustang"
    };

    cars[0] = "camaro";

    std::cout << cars[0];

    return 0;
}