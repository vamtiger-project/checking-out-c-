#include <iostream>

using namespace std;

int main() {
    int numbers[] = {5, 10, 15, 20, 25};
    int arraySize = sizeof(numbers)/sizeof(*numbers);

    cout << ">> The size of an integer is " << sizeof(int) << endl
        << ">> The size of a double is " << sizeof(double) << endl
        << ">> The size of a string is " << sizeof(string) << endl
        << ">> The size of a boolean is " << sizeof(bool) << endl
        << ">> The size of an array is " << sizeof(numbers) << endl
        << ">> The number of elements in the array is " << arraySize << endl
    ;
}