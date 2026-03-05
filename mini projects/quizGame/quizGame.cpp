
// simple quiz game
#include <iostream>

int main(){

    std::string questions[] = {
        "1. what year was C++ created?: ",
        "2. Who invented C++?: ",
        "3. what is the predecessor of C++?: ",
        "4. is the earth flat?: "
    };

    // options
    std::string options[][4] = {
        {"A. 1967", "B. 1990", "C. 1985", "D. 2002"},
        {"A. Guido Van Rossum", "B. bjarne Stroustrup", "C. John Carmack", "D. Donald Trump"},
        {"A. C", "B. C+", "C. C--", "D. Python"},
        {"A. Yes", "B. No", "C. Sometimes", "D. Whats Earth?"}
    };

    // answer key array
    char answerKey[] = {
        'C', 'B', 'A', 'B'
    };

    
    int questionsSize = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0; i < questionsSize; i++){
        std::cout << "******************";
        std::cout << questions[i] << "\n";
        std::cout << "******************";
    }

    return 0;
}