
#include <iostream>
int main(){

    int age;

    std::cout << "enter your age: ";
    std::cin >> age;

    if (age >= 18){
        std::cout << "you are an adult\n";
    } else {
        std::cout << "you child champ. logout\n";
    }

    return 0;
}