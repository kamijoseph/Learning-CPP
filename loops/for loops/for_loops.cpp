
// for loops
#include <iostream>

int main(){

    //  loop to 10
    for (int idx = 1; idx <= 10; idx++){
        std::cout << idx << "\n";
    }
    std::cout << "happy new year\n\n";

    // descending order
    for (int i = 10; i >= 0; i--){
        std::cout << i << "\n\n";
    }
    std::cout << "succesfully counted 10 descending\n";

    return 0;
}