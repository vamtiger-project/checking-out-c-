#include <iostream>

using namespace std;

// Pass the arguments as references, otherwise copies of the arguments will be
// passed in.
void swap(int &number1, int &number2) {
    int number1Copy = number1;

    number1 = number2;
    number2 = number1Copy;
}

int main() {
    int number1, number2;

    number1 = 13;
    number2 = 12;

    cout << ">> Number 1: " << number1 << endl
        << ">> Number 2: " << number2 << endl << endl;

    swap(number1, number2);

    cout << ">> Number 1: " << number1 << endl
        << ">> Number 2: " << number2 << endl;

    return 0;
}