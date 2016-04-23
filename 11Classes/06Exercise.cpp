#include <iostream>

using namespace std;

class Time {
    private:
        int hours, minutes, seconds;

    public:
        Time(int h, int m, int s) {
            hours = h;
            minutes = m;
            seconds = s;
        }

        Time(int h, int m) {
            hours = h;
            minutes = m;
            seconds = 0;
        }

        Time(int m) {
            hours = 0;
            minutes = m;
            seconds = 0;
        }

        Time() {
            hours = 0;
            minutes = 0;
            seconds = 0;
        }

        void setTime(int h, int m, int s) {
            hours = h;
            minutes = m;
            seconds = s;
        }

        void setHours(int h) {
            if (h <= 23) {
                hours = h;
            } else {
                hours = 0;
            }
        }

        void setMinutes(int m) {
            if (m <= 59) {
                minutes = m;
            } else {
                minutes = 0;
            }
        }

        void setSeconds(int s) {
            if (s <= 59) {
                seconds = s;
            } else {
                seconds = 0;
            }
        }

        int getHours() const {
            return hours;
        }

        int getMinutes() const {
            return minutes;
        }

        int getSeconds() const {
            return seconds;
        }

        void showTime() {
            if (seconds > 0) {
                cout << hours << ":"
                    << minutes << ":"
                    << seconds << endl
                ;
            } else {
                cout << hours << ":"
                    << minutes << ":"
                    << seconds << endl
                ;
            }
        }

        void increment(int n) {
            minutes += n;

            if (minutes > 59) {
                hours ++;

                minutes -= 60;
            }
        }
};

int main() {
    Time theTime(6, 0, 0);

    theTime.showTime();

    theTime.setMinutes(23);
    theTime.showTime();

    for (int i = 0; i <= 60; i++) {
        theTime.increment(1);
    }

    theTime.showTime();
}