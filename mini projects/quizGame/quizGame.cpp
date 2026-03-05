
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
        std::cout << questions[i] << "\n";

        for(int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++){
            std::cout << options[i][j] << "\n";
        }

        // accepting user input
        std::cin >> guess;
        guess = toupper(guess);
        
        if(guess == answerKey[i]){
            std::cout << "correct!\n";
            score++;
        }
        else{
            std::cout << "wrong!\n";
            std::cout << "answer is: " << answerKey[i] << "\n";
        }

        std::cout << "*****************************\n\n";
    }

    return 0;
}