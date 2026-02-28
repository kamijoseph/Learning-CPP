
#include <iostream>

int main(){

    double prices[] = {
        5.00, 7.50, 9.99, 15.00
    };

    std::string students[] = {
        "Spongebob", "Patrick", "Squidward", "Sandy", "Plankton"
    };

    // iterating through the students array
    int studentLength = sizeof(students) / sizeof(std::string);

    for (int idx = 0; idx < studentLength; idx++){
        std::cout << students[idx] << "\n\n";
    }

    // char grades array
    char grades[] = {
        'A', 'B', 'c', 'D', 'E', 'F'
    };

    // iterate through grades
    int gradesLength = sizeof(grades) / sizeof(char);

    for (int i = 0; i < gradesLength; i++){
        std::cout << "Grade " << i + 1 << " is: " << grades[i] << "\n";
    }

    return 0;
}