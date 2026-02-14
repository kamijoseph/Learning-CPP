
#include <iostream>
int main(){

    // int age;

    // std::cout << "enter your age: ";
    // std::cin >> age;

    // if (age >= 18){
    //     std::cout << "you are an adult\n";
    // } else if (age < 0) {
    //     std::cout << "you havent even been born yet pal\n";
    // } else if (age == 0){
    //     std::cout << "you were just born\n";
    // } else if (age >= 100){
    //     std::cout << "too old mate. rest now\n";
    // } else {
    //     std::cout << "you child champ. logout\n";
    
    // }

    // switch - alternativ to using many "else if" statements.
    //        - compares one value against matching cases.
    
    int month;
    std::cout << "enter the month number (1-12): ";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "it is january\n";
            break;
        case 2:
            std::cout << "it is february\n";
            break;
        case 3:
            std::cout << "it is march\n";
            break;
        case 4:
            std::cout << "it is april\n";
            break;
        case 5:
            std::cout << "it is may\n";
            break;
        case 6:
            std::cout << "it is june\n";
            break;
        case 7:
            std::cout << "it is july\n";
            break;
        case 8:
            std::cout << "it is august\n";
            break;
        case 9:
            std::cout << "it is september\n";
            break;
        case 10:
            std::cout << "it is october\n";
            break;
        case 11:
            std::cout << "it is november\n";
            break;
        case 12:
            std::cout << "it is december\n";
            break;
    }

    return 0;
}