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

bool operator==(const Date &d1, const Date &d2){
    return (
        d1.getMonth() == d2.getMonth()
        && d1.getDay() == d2.getDay()
        && d1.getYear() == d2.getYear()
    );
}

void compareDay(const Date &day1, const Date &day2) {
    if (day1 == day2) {
        cout << ">> The same day." << endl;
    } else {
        cout << ">> Different day." << endl;
    }
}

int main() {
    Date today(8, 12, 2015);
    Date tomorrow = today;

    compareDay(today, tomorrow);

    today.addDay(1);
    compareDay(today, tomorrow);
}