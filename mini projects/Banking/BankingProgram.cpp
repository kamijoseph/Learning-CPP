
// simple banking program

#include <iostream>

double deposit();
double withdraw(double balance);
void showBalance(double balance);

int main(){

    double balance = 0;
    int choice = 0;

    

    do{

        std::cout << "**********************\n";
        std::cout << "enter your choice:\n";
        std::cout << "**********************\n";
        std::cout << "1. show balance\n";
        std::cout << "2. deposit money\n";
        std::cout << "3. withdraw money\n";
        std::cout << "4. exit\n";
        std::cin >> choice;
        
        switch(choice){
            case 1:
                showBalance(balance);
                break;
            
            case 2:
                balance += deposit();
                break;
            
            case 3:
                balance -= withdraw(balance);
                break;

            case 4:
                std::cout << "thanks for visiting!\n";
                break;

            default:
                std::cout << "invalid choice\n";
        }
    }while(choice != 4);

    return 0;
}

// show balance function
void showBalance(double balance){

}

// deposit function
double deposit(){

}

// withdraw function
double withdraw(double balance){
    
}