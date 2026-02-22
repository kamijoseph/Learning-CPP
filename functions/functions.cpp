
#include <iostream>

// creating a happyBirthday function
void happyBirthday(std::string name, int age){
    std::cout << "\nhappy birthday to " << name << "\n";
    std::cout << "happy birthday to " << name << "\n";
    std::cout << "happy birthday dear " << name << "\n";
    std::cout << "happy birthday to " << name << "\n";
    std::cout << "you are now " << age << " years old\n\n";
}

int main(){
    
    // calling the happy birthday function
    std::string name;
    int age;

    std::cout << "enter your name: ";
    std::cin >> name;

    std::cout << "how old are you?: ";
    std::cin >> age;

    happyBirthday(name, age);

    return 0;
}