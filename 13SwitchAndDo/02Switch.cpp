#include <iostream>

int main() {
    char letterGrade;

    std::cout << ">> Enter your letter grade: ";
        std::cin >> letterGrade;

    std::cout << std::endl;

    switch(letterGrade) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
            std::cout << "You passed!" << std::endl;
            break;
        case 'F':
            std::cout << "You failed!" << std::endl;
            break;
        default:
            std::cout << "I didn't get that grade." << std::endl;
    }

    std::cout << std::endl;
}