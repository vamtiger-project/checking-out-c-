#include <iostream>
#include <vector>

using namespace std;

int main() {
    // vector<int> grades;
    // int total, grade;

    // for (int i = 0; i < 5; i ++) {
    //     cout << ">> Enter a grade: ";
    //         cin >> grade;

    //     grades.push_back(grade);
    // }

    // total = grades[0] + grades[1] + grades[2] + grades[3] + grades[4];

    // cout << endl << ">> The total of the grades is: " << total << endl;

    // total = 0;

    // for (int i = 0; i < grades.size(); i ++) {
    //     total += grades[i];
    // }

    // cout << ">> The total of the grades is: " << total << endl;

    vector<string> names;
    names.push_back("Raymond");
    names.push_back("David");
    names.push_back("Cynthia");
    names.push_back("Jennifer");

    for (int i = 0; i < names.size(); i ++) {
        cout << ">> name: " << names[i] << endl;
    }

    cout << endl;

    names.pop_back(); // Will remove the last item.

    for (int i = 0; i < names.size(); i ++) {
        cout << ">> name: " << names[i] << endl;
    }

    cout << endl;

    names.pop_back(); // Will remove the last item.

    for (int i = 0; i < names.size(); i ++) {
        cout << ">> name: " << names[i] << endl;
    }

    cout << endl;

    names.pop_back(); // Will remove the last item.

    for (int i = 0; i < names.size(); i ++) {
        cout << ">> name: " << names[i] << endl;
    }

    return 0;
}