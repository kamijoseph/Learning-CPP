
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
    std::cout << "you chose: ";
    showChoice(player);

    return 0;
}

// get users choice function
char getUserChoice(){
    
    char player;
    std::cout << "rock paper scissors game!\n";

    do{ 
        std::cout << "choose one of the following:\n";
        std::cout << "*************************\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";
        std::cin >> player;
    }
    while(player != 'r' && player != 'p' && player != 's');
    
    return player;
}

// get computers choice function
char getComputerChoice(){

    return 0;
}

// show choice function
void showChoice(char choice){

    switch(choice){
        case 'r':
            std::cout << "rock\n";
            break;
        case 'p':
            std::cout << "paper\n";
            break;
        case 's':
            std::cout << "scissors\n";
            break;
    }
    
}

// choose winner function
void chooseWinner(char player, char computer){


}