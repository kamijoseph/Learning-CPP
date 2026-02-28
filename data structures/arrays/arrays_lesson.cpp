
// arrays
// data structure that can hold multiple values and values are accesed by an index number
// items of an00000 array should always be of the same data types
// you can declare an array without assigning a value yet but you must declare how many values shuld it have

#include <iostream>
int main(){

    // standard array
    std::string cars[] = {
        "corvette", "porsche", "jeep", "mustang"
    };

    // changing an index
    cars[0] = "camaro";

    std::cout << cars[0];

    return 0;
}