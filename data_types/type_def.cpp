
#include <iostream>
#include <vector>

// aliases the line below to pairlist_t (think like sql AS)
typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;

// lets alias with the using key word instead
using name_t = std::string;
using age_t = int;

int main () {
    
    // instead of using the whole name we can just use the typedef / using dtype
    pairlist_t pairlist;
    text_t firstName = "Kami";
    number_t age = 24;

    name_t lastName = "Kiarie";
    age_t ager = 400;

    std::cout << "my name is " << lastName << "\n";
    std::cout << "i am " << ager << " years old";


    return 0;
}

// over the years typedef has been replaced by the using keyword to perfom the same tasks