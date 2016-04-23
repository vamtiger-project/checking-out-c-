#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> names;
    string name;

    names.push_back("Vamtiger");
    names.push_back("Immortalles");
    names.push_back("Lamia");
    names.push_back("Tigris");

    names[0] = "James"; // Can only be assigned to existing elements.

    for (int i = 0; i < names.size(); i ++) {
        name = names[i];

        cout << ">> " << name << endl;
    }

    return 0;
}