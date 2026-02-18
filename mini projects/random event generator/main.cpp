
// random event generator

#include <iostream>
#include <ctime>
int main(){

    // seed
    srand(time(0));

    // variables
    int randNum = rand() % 5 + 1;

    switch(randNum){
        case 1:
            std::cout << "you won a lambo and a dinner date with kami\n";
            break;
        case 2:
            std::cout << "you won a ferrari\n";
            break;
        case 3:
            std::cout << "you won a duccati superbike";
            break;
        case 4:
            std::cout << "you won a mopped";
            break;
        case 5:
            std::cout << "you won a mountain bike";
            break;
    }


    return 0;
}