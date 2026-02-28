
// foreach loop iteration
// loop that eases the traversal over an iterable data set

#include <iostream>

int main(){

    std::string students[] = {
        "Spongebob", "Patrick", "sandy", "Plankton", "Krabs"
    };

    // iterating with foreach looop - less flexible - starts only at beginning and to the end
    for(std::string student : students){
        std::cout << student << "\n";
    }

    return 0;
}