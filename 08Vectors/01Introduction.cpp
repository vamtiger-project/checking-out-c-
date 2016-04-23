#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> grades;
    int grade, total;
    double average;

    total = 0;

    for (int i = 1; i <= 5; i++) {
        cout << "Enter a grade: ";
            cin >> grade;

        grades.push_back(grade);
    }

    for (int i = 0; i < grades.size(); i ++) {
        total += grades[i];
    }

    average = total / grades.size();

    cout << ">> Average: " << average << endl;

    return 0;
}