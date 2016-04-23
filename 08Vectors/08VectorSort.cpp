#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

void buildVector(vector<int> &vect) {
    srand(time(NULL));

    for (int i = 1; i < 1000; i++) {
        vect.push_back(rand() % 100 + 1);
    }
}

void displayVector(vector<int> &vect) {
    cout << ">> Vector:" << endl << "[";

    for (int i = 0; i < vect.size(); i ++) {
        cout << vect[i] << ", ";
    }

    cout << "]" << endl;
}

void displayVectorString(vector<string> &vect) {
    cout << ">> Vector:" << endl << "[";

    for (int i = 0; i < vect.size(); i ++) {
        cout << vect[i] << ", ";
    }

    cout << "]" << endl;
}

int main() {
    vector<int> numbers;
    vector<string> names;

    names.push_back("Raymond");
    names.push_back("David");
    names.push_back("Cynthia");
    names.push_back("Jennifer");

    buildVector(numbers);

    displayVector(numbers);
    sort(numbers.begin(), numbers.end());
    displayVector(numbers);

    displayVectorString(names);
    sort(names.begin(), names.end());
    displayVectorString(names);
}