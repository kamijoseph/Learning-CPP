#include <iostream>

int main(){

    // integers (whole numbers)
    int x;  // declaring a variable
    x = 5; // assigning a variable

    // declaring and assigning variables at the same time
    int y = 10;
    int age = 21;
    int year = 2023;
    int days = 7;

    // double (number including decimals)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // char (single character)
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    // boolean (True/Fase)
    bool student = true;
    bool power = false;
    bool forSale = true;

    // string (objects that represent a sequence of text)
    std::string name = "Kami";
    std::string day = "Friday";
    std::string adress = "123 somewhere";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}