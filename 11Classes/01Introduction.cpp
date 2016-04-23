#include <iostream>

using namespace std;

// Define the class
class Name {
    private: 
        string first, middle, last;

    public:
        Name(string firstName, string middleName, string lastName) {
            first = firstName;
            middle = middleName;
            last = lastName;
        }

        string toString() {
            return first + " " + middle + " " + last;
        }

        string getFirst() {
            return first;
        }

        string getMiddle() {
            return middle;
        }

        string getLast() {
            return last;
        }
};

int main() {
    // Declare the class.
    Name myName("James", "Alex", "Matthews");

    cout << ">> " << myName.toString() << endl
        << "\t>> First Name: " << myName.getFirst() << endl
        << "\t>> Middle Name: " << myName.getMiddle() << endl
        << "\t>> Last Name: " << myName.getLast() << endl
    ;
}