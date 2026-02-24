
// rock paper scissors game
#include <iostream>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){

    char player;
    char computer;

    player = getUserChoice();

    return 0;
}

// get users choice function
char getUserChoice(){
    
    char player;
    std::cout << "rock paper scissors game!\n";
    std::cout << "*************************\n";
    std::cout << "'r' for rock\n";
    std::cout << "'p' for paper\n";
    std::cout << "'s' for scissors\n";
    std::cin >> player;

    

    return player;
}

// get computers choice function
char getComputerChoice(){

    return 0;
}

// show choice function
void showChoice(char choice){

    
}

// choose winner function
void chooseWinner(char player, char computer){


}