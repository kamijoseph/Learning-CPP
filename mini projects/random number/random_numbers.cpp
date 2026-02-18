
// generating pseudo random numbers

#include <iostream>
#include <ctime>
int main() {

    srand(time(NULL));

    // we add a modulous so the number generated can be within our bounds in this case 100 rounds
    // they start from zero hence the plus 

    // lets roll 3 dices
    int die1 = (rand() % 6) + 1;
    int die2 = (rand() % 6) + 1;
    int die3 = (rand() % 6) + 1;

    std::cout << "dice 1 : " << die1 << " \n";
    std::cout << "dice 2 : " << die2 << " \n";
    std::cout << "dice 3 : " << die3 << " \n";


    return 0;
}