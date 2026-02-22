
#include <iostream>

// creating a happyBirthday function
void happyBirthday(std::string name){
    std::cout << "happy birthday to " << name << "\n";
    std::cout << "happy birthday to " << name << "\n";
    std::cout << "happy birthday dear " << name << "\n";
    std::cout << "happy birthday to " << name << "\n";
}

int main(){
    
    // calling the happy birthday function
    std::string name;
    std::cout << "enter your name: ";
    std::cin >> name;

    happyBirthday(name);

    return 0;
}