#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void numGame() {
    int difficulty;
    cout << "Enter your difficulty (1 for easy, 2 for medium, 3 for hard, 0 to exit): ";
    cin >> difficulty;

    if (difficulty == 0) {
        cout << "Have a great day!" << endl;
        return;
    }

    srand(time(0)); // Creates a new seed everytme it is opened
    int randNum = rand() % 100 + 1; // Makes sure the range is within 1-100
    int attempts = 0;

    if (difficulty == 1) {
        attempts = 10;  
} 
    else if (difficulty == 2) {
        attempts = 5;   
} 
    else if (difficulty == 3) {
        attempts = 3;   
} 
    else {
        cout << "Invalid difficulty level, try again." << endl; // If they input a number that is higher than 3, or lower than 0, retries from the beginning
        numGame();
        return;
}

    int guess;
    cout << "Guess a number between 1 - 100: " << endl;

    for (int i = 0; i < attempts; i++) {
        cout << "Attempt " << i + 1 << ": ";
        cin >> guess;

        if (guess == randNum) {
            cout << "Congratulations, you guessed the correct number!" << endl;
            return;
        } else if (guess < randNum) {
            cout << "Too low, try again." << endl;
        } else {
            cout << "Too high, try again." << endl;
        }
    }

    cout << "Sorry, you've used all your attempts! The correct number was: " << randNum << endl;
}






int main(){
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Guess a number between 1-100. You have limited choices in harder difficulites." << endl;
    cout << "Goodluck!!" << endl;
    
    while(true){
        numGame();

        int answer;
        cout << "Do you want to try again? Enter 1 for YES, 0 for NO: ";
        cin >> answer;

        if(answer == 0){
            cout << "Thank you for playing! Have a good day." << endl;
            break;
        }
        else if(answer != 1){
            cout << "Invalid input, exiting game." << endl;
            break;
        }
    }
    return 0;
}