#include <iostream>

using namespace std;

double calc(double operand1, double operand2, char oper) {
    double result;

    if (oper == '*') {
        result = operand1 * operand2;
    } else if (oper == '+') {
        result = operand1 + operand2;
    } else if (oper == '/') {
        result = operand1 / operand2;
    } else {
        result = operand1 - operand2;
    }

    return result;
}

int main() {
    double op1, op2;
    char op;

    cout << "Enter expressiosn: ";
        cin >> op1 >> op >> op2;

    while(true) {
        cout << "Result: " << calc(op1, op2, op) << endl;
        cout << "Enter expressiosn: ";
        cin >> op1 >> op >> op2;
    }

    return 0;
}