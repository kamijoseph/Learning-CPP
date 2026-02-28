
// pasing am array to a function
#include <iostream>

// declare the fnction
int searchArray(int array[], int size, int element);;

int main(){

    int numbers[] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    int numbersSize = sizeof(numbers) / sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << numbers[1];

    std::cout << "enter the element to be searched for: ";
    std::cin >> myNum;

    // call the function and pass the parameters
    index = searchArray(numbers, numbersSize, myNum);

    if(index != -1){
        std::cout << myNum << " is at index: " << index << "\n";
    }
    else{
        std::cout << myNum << " is not in the array\n";
    }

    return 0;
}

// build the function
int searchArray(int array[], int size, int element){
    for(int idx = 0; idx < size; idx++){
        if(array[idx] == element){
            return idx;
        }
    }
    return -1;
}