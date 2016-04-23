#include <iostream>

using namespace std;

int main() {
    // Declare a pointer.
    int *pNum;
    // Declare multiple pointers.
    int *pNum1, *pNum2;
    // Declare pointers ans variables.
    int *pNum3, pNum4;
    int val = 64;
    int *pVal = &val;
    // Pointers can be initialized with 0, which is the address of no object.
    int *pVal1 = 0;
    // Pointers can point to the same address.
    int *pVal2 = pVal;

    cout << ">> Pointer 1: " << *pVal << " (" << pVal << ")" << endl
        << ">> Pointer 2: " << *pVal2 << " (" << pVal2 << ")" << endl
    ;

}