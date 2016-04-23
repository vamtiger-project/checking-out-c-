#include <iostream>
using namespace std;

int main() {
    // While loops
    // int stop = 10;
    // int start = 0;

    // while (start < stop) {
    //     cout << ">> Itteration: " << start + 1 << endl;

    //     start += 1;
    // }

    // Loop Controle.
    // double balance, rate;
    // int years, count;

    // cout << "What is the starting balance? ";
    // cin >> balance;
    // cout << "What is the annual interest rate? ";
    // cin >> rate;
    // cout << "How many years to calculate interest? ";
    // cin >> years;

    // count = 1;

    // while (count <= years) {
    //     balance *= rate;
    //     ++count;
    // }

    // cout << "After " << years << " years, your balance will be " << balance
    //     << "." << endl;

    // for (int i = 1; i < 11; i++) {
    //     cout << ">> " << i << endl;
    // }

    // double balance, rate;
    // int years, year;

    // cout << "What is the beginning balance? ";
    // cin >> balance;

    // cout << "What is the annual interest rate? ";
    // cin >> rate;

    // cout << "How many years to calculate? ";
    // cin >> years;

    // for (year = 1; year <= years; year ++) {
    //     balance *= rate;
    // }

    // cout << "After " << years << " years, your balance will be " << balance
    //      << "." << endl; 

    /*
     * Challenge: Print a table of '*' characters.
     */
    int rows, columns, row, column;

    cout << ">> Number of rows: ";
    cin >> rows;

    cout << ">> Number of columns: ";
    cin >> columns;

    for (row = 0; row < rows; row ++) {
        for (column = 0; column < columns; column ++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}