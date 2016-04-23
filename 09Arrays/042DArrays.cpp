#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int rows = 20;
    const int cols = 20;
    int multiDimensionalArray[rows][cols];

    srand(time(NULL));

    cout << ">> Multi-Dimensional Array:" << endl
        << "[" << endl;

    for (int rowIndex = 0; rowIndex < rows; rowIndex ++) {
        cout << "    [";

        for (int colIndex = 0; colIndex < cols; colIndex ++) {
            multiDimensionalArray[rowIndex][colIndex] = rand() % 100 + 1;

            cout << multiDimensionalArray[rowIndex][colIndex];

            if (colIndex <= cols - 2) {
                cout << ", ";
            }
        }

        cout << "]";

        if (rowIndex <= rows - 2) {
            cout << ",";
        }

        cout << endl;
    }

    cout << "]" << endl;
}