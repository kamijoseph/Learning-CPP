
// simple banking program

#include <iostream>

double deposit();
double withdraw(double balance);
void showBalance(double balance);

int main(){

    double balance = 0;
    int choice = 0;

    std::cout << "**********************\n";
    std::cout << "enter your choice:\n";
    std::cout << "**********************\n";
    std::cout << "1. show balance\n";
    std::cout << "2. deposit money\n";
    std::cout << "3. withdraw money\n";
    std::cout << "4. exit\n";

    return 0;
}