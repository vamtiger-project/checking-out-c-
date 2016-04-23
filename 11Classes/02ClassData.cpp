#include <iostream>

using namespace std;

class Date {
    private:
        // This cannot be accessed outside the class.
        int pMonth;

    public:
        int month, day, year;
};

int main() {
    Date d1;

    d1.month = 12;

    cout << ">> Month: " << d1.month << endl;
}