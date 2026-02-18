
#include <iostream>
#include <ctime>

int main(){

    int num;
    int guess;
    int tries;

    srand(time(NULL));

    num = (rand() % 100) + 1;

    std::cout << "****** number guessing game *****\n";

    do{
        std::cout << "enter a guess between (1-100): ";
        std::cin >> guess;
        tries ++;

        if(guess > num){
            std::cout << "you are too high\n";
        }
        else if(guess < num) {
            std::cout << "you are too low\n";
        }
        else{
           std::cout << "correct! number of tries: " << tries << " \n";
        }
    }
    while(guess != num);

    std::cout << "********************************************\n";


    return 0;
}