
#include <iostream>

int main(){

    int num_1 = 33;
    int num_2 = 10;

    // sum
    int total_sum = num_1 + num_2;
    std::cout << "total sum is: " << "\n" << total_sum << "\n";

    // product
    int prods = num_1 * num_2;
    std::cout << "the product is: " << "\n" << prods << "\n";
    
    // substraction
    int substractions = num_1 - num_2;
    std::cout << "substraction is: " << "\n" << substractions << "\n";

    // division
    double firstNum = 3345;
    double sndNum = 134;
    double divide_by = firstNum / sndNum;
    std::cout << "the division is:\n" << divide_by << "\n";

    // division with remainder (modulus)
    int remainder = num_2 % 2;
    std::cout << "the remainder of " << num_2 << " division by 2 is: \n" << remainder << "\n";

    return 0;
}