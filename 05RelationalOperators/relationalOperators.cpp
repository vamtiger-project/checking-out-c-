#include <iostream>

using namespace std;

int main() {
    string myPassword = "letMeIn";
    int hoursWorked = 10;
    int hoursIn;
    double rate;
    double grossPay;
    string ifElse;
    string input1, input2, input3;

    cout << ">> 1: True" << endl;
    cout << ">> 0: False" << endl;

    cout << "==: " << (myPassword == "password") << endl;
    cout << "!=: " << (myPassword != "password") << endl;

    cout << "More than 2 hours: " << (hoursWorked > 2) << endl;

    cout << "&&: " << (myPassword == "letMeIn" && hoursWorked != 9) << endl;

    cout << "Enter the hours worked: ";
    cin >> hoursIn;

    if (hoursIn < 40) {
        ifElse = "If";
    } else if (hoursIn == 40) {
        ifElse = "ElseIf";
    } else {
        ifElse = "Else";
    }

    cout << ">> " << ifElse << endl;

    cout << "Enter three words: ";
        cin >> input1 >> input2 >> input3;

    cout << "Input 1: " << input1 << endl;
    cout << "Input 2: " << input2 << endl;
    cout << "Input 3: " << input3 << endl;

    return 0;
}