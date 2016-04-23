#include <iostream>

using namespace std;

void swap(int &n1, int &n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

void pSwap(int *n1, int *n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void reinit(int *val) {
    *val = 0;
}

void displayVariable(int &variable) {
    cout << ">> Variable: " << variable << endl;
}

int main() {
    int num1 = 100;
    int num2 = 50;
    int num3 = 70;

    displayVariable(num1);

    displayVariable(num2);
    displayVariable(num3);

    // Always use address operator.
    pSwap(&num2, &num3);
    displayVariable(num2);
    displayVariable(num3);
}