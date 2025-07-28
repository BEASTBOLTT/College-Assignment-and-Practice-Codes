#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
  srand(time(0)); // seed the random number generator
  int numberToGuess = rand() % 1000 + 1; // generate a random number between 1 and 1000

  std::cout << "I have a number between 1 and 1000.\n";
  std::cout << "Can you guess my number?\n";
  std::cout << "Please type your first guess.\n";

  int guess;
  while (true) {
    std::cin >> guess;

    if (guess == numberToGuess) {
      std::cout << "Excellent! You guessed the number!\n";
      char playAgain;
      std::cout << "Would you like to play again (y or n)?\n";
      std::cin >> playAgain;
      if (playAgain == 'y') {
        numberToGuess = rand() % 1000 + 1; // generate a new random number
        std::cout << "I have a number between 1 and 1000.\n";
        std::cout << "Can you guess my number?\n";
        std::cout << "Please type your first guess.\n";
      } else {
        break; // exit the program
      }
    } else if (guess < numberToGuess) {
      std::cout << "Too low. Try again.\n";
    } else {
      std::cout << "Too high. Try again.\n";
    }
  }

  return 0;
}