#include <iostream>
// Import Library to allow text file processing.
#include <fstream>

using namespace std;

int main() {
    // Declare data type to create a file (output file stream).
    ofstream outFile(
        // File Path.
        "grades.text",

        // Specify to open file for output.
        ios::out
    );
    int grade;

    for (int i = 1; i < 6; i ++) {
        cout << ">> Enter a grade: ";
        
        cin >> grade;

        // Write to file.
        outFile << grade << endl;
    }

    // Close the file.
    outFile.close();

    cout << ">> All finished." << endl;
}