
#include <iostream>

int main(){

    double prices[] = {
        5.00, 7.50, 9.99, 15.00
    };

    std::string students[] = {
        "Spongebob", "Patrick", "Squidward", "Sandy", "Plankton"
    };

    // iterating through the array
    int studentLength = sizeof(students) / sizeof(std::string);

    for (int idx = 0; idx < studentLength; idx++){
        std::cout << students[idx] << "\n";
    }

    return 0;
}