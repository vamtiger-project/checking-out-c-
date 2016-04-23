#include <iostream>

using namespace std;

/**
 * Pointers are objects that reference memory addresses where values are stored.
 **/

int main() {
    // Define a variable.
    string name = "Vamtiger";
    // Define a corresponding pointer.
    string *namePointer = &name;

    cout << ">> Variable: " << name << endl
        // Output the memory address of the pointer.
        << ">> Pointer Memory Address: " << namePointer << endl
        // Output the value of the pointer.
        << ">> Pointer Value: " << *namePointer << endl;
}