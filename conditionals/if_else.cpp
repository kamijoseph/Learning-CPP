
#include <iostream>
int main(){

    int age;

    std::cout << "enter your age: ";
    std::cin >> age;

    if (age >= 18){
        std::cout << "you are an adult\n";
    } else if (age < 0) {
        std::cout << "you havent even been born yet pal\n";
    } else if (age == 0){
        std::cout << "you were just born\n";
    } else if (age >= 100){
        std::cout << "too old mate. rest now\n";
    } else {
        std::cout << "you child champ. logout\n";
    }

    return 0;
}