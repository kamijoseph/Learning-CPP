
#include <iostream>

void sortNumbers(int array[], int size);

int main(){
    
    int numbers[] = {
        19, 13, 5, 11, 0, 15, 21, 12, 3, 8, 3, 3, 5
    };
    int numbersSize = sizeof(numbers) / sizeof(numbers[0]);

    // sorting the array
    sortNumbers(numbers, numbersSize);

    for(int number: numbers){
        std::cout << number << " ";
    }

    return 0;
}

void sortNumbers(int array[], int size){

    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

}