#include <iostream>

using namespace std;

int main() {
    const int size = 4;
    int numbers[size] = {5, 10, 15, 20};
    int *pNumbers = &numbers[0];

    cout << ">> Numbers: [";
    for (int i = 0; i < size; i ++) {
        cout << numbers[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    // Array access using pointers is slightly faster than using subscripts.
    cout << ">> Pointer Numbers: [";
    for (int i; i < size; i ++) {
        if (i == 0) {
            cout << *pNumbers;
        } else {
            cout << *(pNumbers+i);
        }

        if (i < size - 1) {
            cout << ", ";
        }
    }

    cout << "]" << endl;

    // Array names are pointers to the array.
    cout << ">> Array as Pointer: [";
    for (int i; i < size; i ++) {
        if (i == 0) {
            cout << *numbers;
        } else {
            cout << *(numbers+i);
        }

        if (i < size - 1) {
            cout << ", ";
        }
    }

    cout << "]" << endl;
}