#include <iostream>

using namespace std;

class Date {
    private:
        int month, day, year;

    public:
        // Class constructors can be overloaded.
        // NB!! The argument list must be different.
        Date(int m, int d, int y) {
            month = m;
            day = d;
            year = y;
        }

        Date(int m, int y) {
            month = m;
            day = 0;
            year = y;
        }

        // Default contstructor
        // NB!! Assumes you're not assigning anyt initial data to the object.
        //      It defines default values.
        Date() {
            month = 0;
            day = 0;
            year = 0;
        }

        void toString(string dateName) {
            cout << ">> " << dateName << ":" << endl
                << "\t>> Month: " << month << endl
                << "\t>> Day: " << day << endl
                << "\t>> Year: " << year << endl
            ; 
        }
};

int main() {
    Date today(12, 7, 2015);
    Date yesterday(12, 2015);
    Date tomorrow;

    today.toString("Today");
    yesterday.toString("Yesterday");
    tomorrow.toString("Tomorrow");
}