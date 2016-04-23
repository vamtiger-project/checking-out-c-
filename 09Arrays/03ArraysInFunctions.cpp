#include <iostream>

using namespace std;

void buildArray(int array[], int size) {
    srand(time(NULL));

    for (int i = 0; i < size; i ++) {
        array[i] = rand() % 100 + 1;
    }
}

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
    const int size = 10;
    int grades[size];

    buildArray(grades, size);
    displayArray(grades, size);
}