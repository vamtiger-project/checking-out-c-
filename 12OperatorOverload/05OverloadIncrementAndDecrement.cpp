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

        void print(string dateName) const {
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

        void operator+(int n) {
            day += n;
        }

        void operator-(int n) {
            day -= n;
        }

        Date &operator+=(int n) {
            day += n;

            return *this;
        }

        Date &operator-=(int n) {
            day -= n;

            return *this;
        }

        Date &operator=(const Date &date) {
            month = date.month;
            day = date.day;
            year = date.year;

            return *this;
        }

        // Prefix
        Date &operator++() {
            day ++;

            return *this;
        }

        // Postfix: Specify the data type of the return value as the argument.
        Date &operator++(int) {
            ++*this;

            return *this;
        }

        // Prefix
        Date &operator--() {
            day --;

            return *this;
        }

        // Postfix
        Date &operator--(int) {
            --*this;

            return *this;
        }
};

// Overload the input stream.
istream &operator>>(istream &input, Date &date) {
    int month, day, year;
    char slash1, slash2;

    input >> month >> slash1 >> day >> slash2 >> year;

    date = Date(month, day, year);

    return input;
}

// Overload the output stream.
ostream &operator<<(ostream &output, const Date &date) {
    return output << date.getMonth() << "/" << date.getDay()
        << "/" << date.getYear() << endl
    ;
}

// Overload the comparison operator
bool operator==(const Date &d1, const Date &d2) {
    return (
        d1.getMonth() == d2.getMonth()
        && d1.getDay() == d2.getDay()
        && d1.getYear() == d2.getYear()
    );
}

// Overload the greater than operator.
bool operator>(const Date &date1, const Date &date2) {
    bool greaterThan = false;

    if (
    date1.getYear() > date2.getYear()
    ||
    (date1.getYear() == date2.getYear()
    && date1.getMonth() > date2.getMonth())
    ||
    (date1.getYear() == date2.getYear()
    && date1.getMonth() == date2.getMonth()
    && date1.getDay() > date2.getDay())
    ) {
        greaterThan = true;
    }

    return greaterThan;
}

// Overload greather than or equal operator.
bool operator>=(const Date &date1, const Date &date2) {
    bool greaterThanOrEqual = false;

    if (
    date1.getYear() > date2.getYear()
    ||
    (date1.getYear() == date2.getYear()
    && date1.getMonth() > date2.getMonth())
    ||
    (date1.getYear() == date2.getYear()
    && date1.getMonth() == date2.getMonth()
    && date1.getDay() > date2.getDay())
    ||
    (date1.getYear() == date2.getYear()
    && date1.getMonth() == date2.getMonth()
    && date1.getDay() == date2.getDay())
    ) {
        greaterThanOrEqual = true;
    }

    return greaterThanOrEqual;
}

void compareDay(const Date &day1, const Date &day2) {
    if (day1 == day2) {
        cout << ">> The same day." << endl;
    }

    if (day1 > day2) {
        cout << ">> Greater than." << endl;
    }

    if (day1 >= day2) {
        cout << ">> Greater than or equals." << endl;
    }

    cout << endl;
}

int main() {
    Date today(12, 8, 2015);

    today.print("Today");

    ++today;
    today.print("Today");
    today++;
    today.print("Today");

    --today;
    today.print("Today");
    today--;
    today.print("Today");
}