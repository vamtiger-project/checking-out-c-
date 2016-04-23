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

        void print(string dateName) {
            cout << ">> " << dateName << ": "
                << getMonth() << "/" << getDay() << "/" << getYear() << endl
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

        // Ensure's the returned value is constant
        int getMonth() const {
            return month;
        }

        // Ensure's the returned value is constant
        int getDay() const {
            return day;
        }

        // Ensure's the returned value is constant
        int getYear() const {
            return year;
        }

        void addDay(int n) {
            day += n;
        }

        void addMonth(int n) {
            month += n;
        }

        bool equal(Date dt) {
            if (
            month == dt.month
            && day == dt.day
            && year == dt.year) {
                return true;
            } else {
                return false;
            }
        }
};

int main() {
    Date today(12, 7, 2015);
    Date yesterday(12, 2015);
    Date tomorrow;
    Date date1(12, 18, 2015);
    Date date2 = date1;
    Date date3(12, 21, 2015);
    Date date4 = date3;

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
        << "/" << tomorrow.getYear() << endl << endl
    ;

    tomorrow.print("Tomorrow");
    tomorrow.addDay(5);
    tomorrow.addMonth(-5);
    tomorrow.print("Tomorrow");

    date1.print("Date 1");
    date2.print("Date 2");

    date3.setDay(30);
    date3.print("Date 3");
    date4.print("Date 4");

    if (date1.equal(date2)) {
        cout << "The same day." << endl;
    } else {
        cout << "A different day." << endl;
    }

    if (date3.equal(date4)) {
        cout << "The same day." << endl;
    } else {
        cout << "A different day." << endl;
    }
}