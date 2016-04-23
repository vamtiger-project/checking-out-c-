#include <iostream>

int main() {
    char letterGrade;

    std::cout << ">> Enter your letter grade: ";
        std::cin >> letterGrade;

    std::cout << std::endl;

    // NB!! Switch only works with int and char data types.
    switch(letterGrade) {
        case 'A':
            std::cout << "An A is in the range of 90-100.";
            break;
        case 'B':
            std::cout << "A B is in the range of 80-90.";
            break;
        case 'C':
            std::cout << "A C is in the range of 70-80.";
            break;
        case 'D':
            std::cout << "A D is in the range of 60-70.";
            break;
        case 'E':
            std::cout << "An E is in the range of 50-60.";
            break;
        case 'F':
            std::cout << "An F is in the range of 0-50.";
            break;
        default:
            std::cout << "Don't recognize the input.";
    }

    std::cout << std::endl;
}