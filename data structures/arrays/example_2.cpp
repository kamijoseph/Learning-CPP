
#include <iostream>

int main(){

    double prices[] = {
        5.00, 7.50, 9.99, 15.00
    };

    std::string students[] = {
        "Spongebob", "Patrick", "Squidward", "Sandy"
    };

    // iterating through the array
    for (int idx = 0; idx < 4; idx++){
        std::cout << students[idx] << "\n";
    }

    return 0;
}