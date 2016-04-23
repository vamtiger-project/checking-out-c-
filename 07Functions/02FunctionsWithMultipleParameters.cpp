#include <iostream>

using namespace std;

int getMax(int number1, int number2, int number3) {
    int largestNumber = number1;

    if (number2 > largestNumber) {
        largestNumber = number2;
    }

    if (number3 > largestNumber) {
        largestNumber = number3;
    }

    return largestNumber;
}

double ftoc(double temp) {
    return (temp - 32.0) * (5.0/9.0);
}

double ctof(double temp) {
    return (temp * (9.0/5.0) + 32.0);
}

double convertTemp(double temp, char scale) {
    if (scale == 'c') {
        return ftoc(temp);
    } else {
        return ctof(temp);
    }
}

int main() {
    // int number1, number2, number3, max;

    // cout << "Enter the first number: ";
    // cin >> number1;

    // cout << "Enter the second number: ";
    // cin >> number2;

    // cout << "Enter the third number: ";
    // cin >> number3;

    // max = getMax(number1, number2, number3);

    // cout << "The maximum value is " << max << endl;

    double fahrTemp, celsius;

    // cout << "Endter a fahrenheit temperature: ";
    // cin >> fahrTemp;

    // celsius = ftoc(fahrTemp);

    // cout << fahrTemp << " fahrenheit is equal to " << celsius << " celsius."
    //     << endl;

    // cout << "Enter a celsius temperature: ";
    // cin >> celsius;

    // fahrTemp = ctof(celsius);

    // cout << celsius << " celsius is equal to " << fahrTemp << " fahrenheit."
    //     << endl;

    double temp, convertedTemp;
    char tempScale;

    cout << "Enter a temperature and a scale to convert to: ";
    cin >> temp >> tempScale;

    convertedTemp = convertTemp(temp, tempScale);

    cout << "The converted temperature is: " << convertedTemp << "." << endl;


    return 0;
}