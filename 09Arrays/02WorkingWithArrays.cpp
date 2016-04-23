#include <iostream>

using namespace std;

void displayArray(int array[], int size) {
    int secondLastIndex = size - 2;

    cout << ">> Array: " << endl
        << "[";

    for (int i = 0; i < size; i ++) {
        cout << array[i];

        if (i <= secondLastIndex) {
            cout << ", ";
        }
    }

    cout << "]" << endl;
}

int main() {
    // Define a constant for the size of the array.
    const int size = 10;
    // Define an array.
    int numbers[size]; 

    // Populate the array.
    for (int i = 0; i < size; i ++) {
        numbers[i] = i + 1;
    }

    displayArray(numbers, size);
}