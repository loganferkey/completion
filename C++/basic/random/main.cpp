#include <iostream>

int main(int argc, char* argv[]) {

    // Number guessing game
    int ceil;
    int num;
    int guess;
    int attempts = 0;

    srand(time(NULL)); // seed random
    std::cout << "============== Guess a number! ==============\n";
    std::cout << "What range would you like? (Up to what number)\n";
    std::cin >> ceil;
    
    num = (rand() % ceil) + 1; // determine number with upper bound, 1 - number chosen
    std::cout << "Your number was chosen, try to guess!\n";

    do {

        std::cin >> guess;
        attempts++;

        if (guess > num) {
            std::cout << "Number was too high! Try again.\n";
        } else if (guess < num) {
            std::cout << "Too low!\n";
        } else {
            std::cout << "Congratulations, you got it right!\n";
            std::cout << "It only took you " << attempts << " tries! Woohoo!";
        }

    } while (guess != num);

    return 0;

}