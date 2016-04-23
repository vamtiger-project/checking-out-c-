#include <iostream>

using namespace std;

int main() {
    int numbers[10]; // An array of 10 integers, called numbers.
    int moreNumbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // An initialization list.
    int numbersAgain[10] = {1, 2, 3, 4, 5}; // Incomplete initialization list.

    for (int i = 0; i < 10; i ++) {
        numbers[i] = i + 1;
    }

    // sizeof is the number of bytes.
    cout << ">> Numbers: " << numbers << " (" << sizeof(numbers) << " bytes)" 
        << endl;

    for (int i = 0; i < 10; i ++) {
        cout << "\t>> " << i << ": " << numbers[i] << endl;
    }

    cout << "\n>> More Numbers: " << moreNumbers << " (" << sizeof(moreNumbers) 
        << " bytes)" << endl;

    for (int i = 0; i < 10; i ++) {
        cout << "\t>> " << i << ": " << moreNumbers[i] << endl;
    }

    cout << "\n>> Numbers Again: " << numbersAgain << " (" << sizeof(numbersAgain) 
        << " bytes)" << endl;

    for (int i = 0; i < 10; i ++) {
        cout << "\t>> " << i << ": " << numbersAgain[i] << endl;
    }

    return 0;
}