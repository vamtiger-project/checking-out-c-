#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

void displayVector(vector<int> vect) {
    for (int i = 0; i < vect.size(); i ++) {
        cout << vect[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> randomNumbers;
    int randomNumber;
    srand(time(NULL)); // Returns the time in milliseconds: This number is
                       // provided as the seed. Once it's been seeded, you can
                       // generate random numbers.
    for (int i = 1; i <= 10000; i ++) {
        randomNumber = rand() % 10000 + 1; // Generate a random number in the range of
                                  // 1 - 10
        randomNumbers.push_back(randomNumber);
    }

    displayVector(randomNumbers);

    return 0;
}