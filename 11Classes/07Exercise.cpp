#include <iostream>

using namespace std;

class Calculator {
    public:
        double add(double op1, double op2) {
            return op1 + op2;
        }

        double sub(double op1, double op2) {
            return op1 - op2;
        }

        double mult(double op1, double op2) {
            return op1 * op2;
        }

        double div(double op1, double op2) {
            return op1 / op2;
        }

        double calc(double op1, double op2, double op) {
            double result;

            if (op == '+') {
                result = add(op1, op2);
            } else if(op == '-') {
                result = sub(op1, op2);
            } else if(op == '*') {
                result = mult(op1, op2);
            } else if (op == '/') {
                result = div(op1, op2);
            }

            return result;
        }
};

int main() {
    // Compiler calls default constructor
    Calculator c;
    double op1, op2;
    char op;

    while(true) {
        cout << ">> ";
        cin >> op1 >> op >> op2;

        cout << c.calc(op1, op2, op) << endl << endl;
    }
}