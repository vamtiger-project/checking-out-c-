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

        void displayDate(string dateName) {
            cout << ">> " << dateName << ":" << endl
                << "\t>> Month: " << month << endl
                << "\t>> Day: " << day << endl
                << "\t>> Year: " << year << endl
            ; 
        }

        void setDate(int m, int d, int y) {
            month = m;
            day = d;
            year = y;
        }

        void setMonth(int m) {
            if (m < 1 || m > 12) {
                cout << ">> Month out of range: " << m << endl;
            } else {
                month = m;
            }
        }

        void setDay(int d) {
            day = d;
        }

        void setYear(int y) {
            year = y;
        }

        int getMonth() {
            return month;
        }

        int getDay() {
            return day;
        }

        int getYear() {
            return year;
        }
};

int main() {
    Date today(12, 7, 2015);
    Date yesterday(12, 2015);
    Date tomorrow;

    today.displayDate("Today");
    today.setMonth(15);
    today.setMonth(0);
    today.setMonth(11);
    today.displayDate("Today");

    yesterday.displayDate("Yesterday");
    yesterday.setDay(7);
    yesterday.setYear(2014);
    yesterday.displayDate("Yesterday");

    tomorrow.displayDate("Tomorrow");
    tomorrow.setDate(12, 18, 2015);
    tomorrow.displayDate("Tomorrow");

    cout << ">> Tomorrow: " << tomorrow.getMonth() << "/" << tomorrow.getDay() 
        << "/" << tomorrow.getYear() << endl
    ;
}