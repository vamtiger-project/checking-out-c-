#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

void buildVector(vector<int> &vect) {
    srand(time(NULL));

    for (int i = 1; i <= 100; i ++) {
        vect.push_back(
            rand() % 100 + 1
        );
    }
}

int searchVector(vector<int> &vect, int value) {
    for (int i = 0; i < vect.size(); i ++) {
        if (vect[i] == value) {
            return i;
        }
    }

    return -1;

    // int found = -1;

    // int found = vect.at(value); // NB!! Not always accurate.

    // cout << ">> Found: " << found << endl;

    // return found;
}

void displayVector(vector<int> vect) {
    for (int i = 0; i < vect.size(); i ++) {
        cout << vect[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> numbers;
    int found, item;

    buildVector(numbers);

    cout << "Enter a value to search for: ";
        cin >> item;

    found = searchVector(numbers, item);

    cout << ">> Numbers:" << endl;
    displayVector(numbers);
    cout << endl;

    if (found > 1) {
        cout << ">> Found " << item << " at position " << found 
            << " (" << numbers[found] << ")." << endl;
    } else {
        cout << ">> The vectory does not contain " << item << "." << endl;
    }

    return 0;
}