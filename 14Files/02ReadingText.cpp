#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
    int grade, total, count;
    double average = 0.0;
    string fileName;

    count = 0;
    total = 0;

    cout << "Enter a file name: ";
    getline(cin, fileName);

    // Use input file stream.
    ifstream inFile(
        // Convert string to CType string (array of chars) required for ifstream
        fileName.c_str(), 
        ios::in
    );

    // If the file could not be opened for input.
    if (!inFile) {
        cout << "file not found!" << endl;
        // Exit the program.
        exit(1);
    }

    // While there is still data in the file to read,
    while(!inFile.eof()) {
        // Read a line.
        inFile >> grade;

        total += grade;
        count ++; 

        cout << grade << endl;
    }

    average = total / count;

    cout << "The average grade is: " << average << endl;

    inFile.close();
}