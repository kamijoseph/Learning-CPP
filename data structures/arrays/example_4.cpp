
// pasing am array to a function
#include <iostream>

// declare the fnction
double getTotal(double prices[], int size);

int main(){

    double prices[] = {
        5.09, 7.55, 6.45, 5.50, 12.33
    };
    int pricesSize = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, pricesSize);

    std::cout << "total prices: " << total << "\n";

    return 0;
}

double getTotal(double prices[], int size){

    double total = 0;
    for(int idx = 0; idx < size; idx++){
        total += prices[idx];
    }

    return total;
}