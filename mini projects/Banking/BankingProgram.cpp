
// simple banking program

#include <iostream>
#include <iomanip>

double deposit();
double withdraw(double balance);
void showBalance(double balance);

int main(){

    double balance = 1220;
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

        // checks for invalid user input and prevent program from crashing
        std::cin.clear();
        // fflush(stdin); this didnt work, research
        
        switch(choice){
            case 1:
                showBalance(balance);
                break;
            
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;

            case 4:
                std::cout << "thanks for visiting!\n";
                break;

            default:
                std::cout << "invalid choice\n";
                break;
        }
    }while(choice != 4);

    return 0;
}

// show balance function
void showBalance(double balance){
    std::cout << "the balance is: $" << std::setprecision(2) << std::fixed << balance << "\n";
}

// deposit function
double deposit(){
    
    // deposit input
    double amount = 0;
    std::cout << "enter the amount to be deposited: ";
    std:: cin >> amount;

    // amount validity
    if (amount > 0){
        std::cout << "$" << amount << std::setprecision(2) << std::fixed << " deposit was succesful\n";

        return amount;
    }
    else{
        std::cout << "amount must be above zero\n";
        return 0;
    }
}

// withdraw function
double withdraw(double balance){
    
    double amount = 0;

    std::cout << "enter amout to be withdrawn: ";
    std::cin >> amount;

    if (amount > balance){
        std::cout << "insufficient funds.\n";
        return 0;
    }
    else if (amount < 0){
        std::cout << "not a valid amount\n";
        return 0;
    }
    else{
        std::cout << "$" << amount << std::setprecision(2) << std::fixed << " withdrawal was succesful\n";
        return amount;
    }
}

// make better