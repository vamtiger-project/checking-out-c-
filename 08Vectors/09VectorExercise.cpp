#include <iostream>
#include <vector>
#include <algorithm>

/**
 * Exercise
 * --------
 * See if string is a palindrome.
 **/

using namespace std;

void displayVectorString(vector<string> &vect) {
    cout << ">> Vector:" << endl << "[";

    for (int i = 0; i < vect.size(); i ++) {
        cout << vect[i] << ", ";
    }

    cout << "]" << endl;
}

string buildWord(string word) {
    string rword = "";
    vector<string> wrd;

    for (int i = 0; i < word.length(); i ++) {
        wrd.push_back(word.substr(i, 1));
    }

    reverse(wrd.begin(), wrd.end());

    for (int i = 0; i < wrd.size(); i++) {
        rword += wrd[i];
    }

    return rword;
}

int main () {
    string word, rword;

    cout << ">> Enter a word: ";
        cin >> word;

    rword = buildWord(word);

    cout << ">> Reversed: " << rword << endl << endl;

    if (word == rword) {
        cout << ">> ...pallindrome!";
    } else {
        cout << ">> ...NOT!";
    }

    cout << endl;

    return 0;
}