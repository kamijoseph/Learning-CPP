
// sizeof() - this operator returns the size of a value in bytes, (or adress to that)

#include <iostream>
int main(){

    std::string name = "kami joseph";
    double gpa = 3.5;
    char grade = 'A';
    bool student = true;
    char grades[] = {
        'A', 'B', 'C', 'D', 'E', 'F'
    };
    std::string students[] = {
        "Spongebob", "Patrick", "Squidward"
    };

    // prints the size of a string (which a sring adress) in bytes ofc
    std::cout << "\nname string byte size: " << sizeof(name) << " bytes\n";

    // byte size of thge gpa/ souble
    std::cout << "gpa double byte size: " << sizeof(gpa) << " bytes\n";

    // byte size of a char
    std::cout << "grade char byte size: " << sizeof(grade) << " bytes\n";

    // byte size of boolean
    std::cout << "student boolean byte size: " << sizeof(student) << " bytes\n";

    // prints the size of the grades array in bytes
    std::cout << "grades char array byte size: " << sizeof(grades) << " bytes\n";

    // getting the actual size of the array
    std::cout << "grades char array has "  << sizeof(grades) / sizeof(char) << " elements\n";

    // getting the number of strings in the array of students strings
    std::cout << "students string array has " << sizeof(students) / sizeof(std::string) << " elements\n\n";

    return 0;
}