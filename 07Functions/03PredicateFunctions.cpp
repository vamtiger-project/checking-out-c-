#include <iostream>

using namespace std;

bool isEven(int number) {
    return ((number % 2) == 0);
}

bool isVowel(char letter) {
    if (
        (letter == 'a') || (letter == 'e') || (letter == 'i') || (letter == 'o')
        || (letter == 'u')
       ) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num;

    // cout << "Enter a number: ";
    // cin >> num;

    // if (isEven(num)) {
    //     cout << num << " is even.";
    // } else {
    //     cout << num << " is odd.";
    // }

    char ltr;

    cout << "Enter a letter: ";
    cin >> ltr;

    if (isVowel(ltr)) {
        cout << ltr << " is a vowel.";
    } else {
        cout << ltr << " is a consonant.";
    }

    cout << endl;

    return 0;
}