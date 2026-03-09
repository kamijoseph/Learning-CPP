
// memory adress

#include <iostream>
int main()
{
    std::string name = "Kami";
    int age = 20;
    bool student = true;

    // print adresses: a memory adress can be accesed with & (adress-of operator)
    std::cout << &name << "\n";
    std::cout << &age << "\n";
    std::cout << &student << "\n";

    return 0;
}