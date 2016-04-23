#include <iostream>

using namespace std;

int main() {
    int num = 64;
    int *pNum = &num;

    cout << ">> Variable: " << num << " (" << &num << ")" << endl
        << ">> Pointer: " << *pNum << " (" << pNum << ")" << endl
    ;

    // Update the value of the pointer.
    *pNum = 777;

    cout << ">> Variable: " << num << " (" << &num << ")" << endl
        << ">> Pointer: " << *pNum << " (" << pNum << ")" << endl
    ;
}