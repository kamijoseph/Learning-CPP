
// break - break out of a loop
// continue - skip the current iteration

#include <iostream>

int main(){

    // break scenario - the loops stops at number 13
    for (int i = 0; i <= 20; i++){
        if (i == 13){
            break;
        }
        std::cout << i << "\n\n";
    }

    std::cout << "next loop\n\n";

    // continue scenario - the loops skips number 13
    for (int idx = 20; idx >= 0; idx--){
        if (idx == 13){
            continue;
        }
        std::cout << idx << "\n\n";
    }

    return 0;
}