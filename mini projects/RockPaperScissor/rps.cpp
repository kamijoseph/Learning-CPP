
// rock paper scissors game
#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){

    char player;
    char computer;

    // playeer
    player = getUserChoice();
    std::cout << "you chose: ";
    showChoice(player);

    // computer
    computer = getComputerChoice();
    std::cout << "computer chose: ";
    showChoice(computer);

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

    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num){
        case 1:
            return 'r';
        case 2:
            return 'p';
        case 3:
            return 's';
    }

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