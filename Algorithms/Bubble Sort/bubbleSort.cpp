
#include <iostream>

int main(){
    
    int numbers[] = {
        19, 13, 5, 11, 0, 15, 21, 12, 3, 8, 3, 3, 5
    };
    
    int numbersSize = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << numbersSize << "\n";

    return 0;
}