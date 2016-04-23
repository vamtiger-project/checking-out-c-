#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char c;
    ifstream inFile(
        "/Applications/Research/SANBIseq/SANBIseq.pyw",
        ios::in
    );

    inFile.get(c);

    while(!inFile.eof()) {
        cout << c;
        inFile.get(c);
    }

    cout << endl;

    inFile.close();
}