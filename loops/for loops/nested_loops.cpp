
// nested loops - loops inside other loops
// creating a rectangle of symbols

#include <iostream>

int main(){

    int rows;
    int columns;
    char symbol;

    std::cout << "how many rows do you want?: ";
    std::cin >> rows;

    std::cout << "how many columns do you want?: ";
    std::cin >> columns;

    for(int i = 1; i <= 3; i++){
        for (int j = 1; j <= 10; j++){
            std::cout << j << " ";
        }
        std::cout << "\n";
    }

    return 0;
}