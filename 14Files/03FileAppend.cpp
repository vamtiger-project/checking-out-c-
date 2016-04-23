#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
    int grade;
    string fileName;
    char cont;

    cout << "Enter a file name: ";
    getline(cin, fileName);

    // Open file for appending
    ofstream outFile(fileName.c_str(), ios::app);

    // If the file could not be opened.
    if (!outFile) {
        cout << "Could not open file";
        exit(1);
    }

    do {
        cout << "Enter a grade: ";
        cin >> grade;
        outFile << grade << endl;

        cout << "Enter another grade? (y/n): ";
        cin >> cont;
    } while(cont == 'y');

    outFile.close();
}