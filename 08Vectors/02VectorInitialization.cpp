#include <iostream>
#include <vector>

using namespace std;

int main() {
    // vector<string> names;
    // cout << "The first value is: " << names[0] << endl; // Will cause a runtime
                                                        // error.
    vector<string> names(10, "Default value"); // Reserve 10 spaces, with a default value.
    cout << "The first value is: " << names[0] << endl; // This will work.

    for (int i = 0; i < names.size(); i ++) {
        cout << i << ": " << names[i] << endl;
    }

    return 0;
}