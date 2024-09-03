#include <iostream>
#include <cstdlib> // For std::rand() and std::srand()
#include <ctime>   // For std::time()

using namespace std;

int main() {
    // Initialize random seed based on current time
    std::srand(std::time(0));

    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 100;
    int numberToGuess = std::rand() % (MAX_NUMBER - MIN_NUMBER + 1) + MIN_NUMBER;
    int userGuess;
    int numberOfAttempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between " << MIN_NUMBER << " and " << MAX_NUMBER << ". Try to guess it!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        numberOfAttempts++;

        if (userGuess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the number in " << numberOfAttempts << " attempts!" << endl;
        }
    } while (userGuess != numberToGuess);

    return 0;
}
