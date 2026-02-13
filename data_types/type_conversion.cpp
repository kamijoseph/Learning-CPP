
#include <iostream>
int main(){

    // type conversion:

    int correct = 8;
    int total = 10;
    double score = (double) correct / (double) total * 100;

    std::cout << score << "%\n";

    return 0;
}