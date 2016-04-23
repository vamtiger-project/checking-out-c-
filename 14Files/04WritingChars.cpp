#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char c;

    c = 'h';

    ofstream outFile(
        // File Path.
        "writingCharacters.txt",

        // Specify to open the file for output.
        ios::out
    );

    outFile.put(c);
    outFile.put('e');
    outFile.put('l');
    outFile.put('l');
    outFile.put('o');
    outFile.put(' ');

    outFile.close();
}