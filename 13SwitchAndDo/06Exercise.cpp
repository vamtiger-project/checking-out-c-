#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed random number generator.
    std::srand(std::time(NULL));

    int number, guess;
    char cont = 'y';

    number = std::rand() %10 + 1;

    do {
        std::cout << ">> Guess a number: ";
            std::cin >> guess;

        if (guess == number) {
            std::cout << "That's right!" << std::endl;
            break;
        }

        std::cout << ">> Sorry. Do you want to guess again? ";
            std::cin >> cont; 
    } while (cont == 'y');
}