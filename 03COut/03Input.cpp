#include <iostream>

int main() {
    int number;
    std::string name;

    std::cout << ">> Input a number: ";
        std::cin >> number;

    std::cout << "\n>> The number you just input was: " << number << "."
        << std::endl << std::endl;



    std::cout << ">> Input your name: ";
        std::cin.ignore(); // flush the input stream cin.
        std::getline(std::cin, name);

    std::cout << ">> Hello there, " << name << "!" << std::endl << std::endl;

    return 0;
}