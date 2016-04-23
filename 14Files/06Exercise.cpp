#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

using namespace std;

string fileName = "todoList.txt";

int menu() {
    int choice;

    cout << "0. Exit the program." << endl;
    cout << "1. Display the to-do list." << endl;
    cout << "2. Add item to the to-do list." << endl;
    cout << "3. Remove item from the to-do list." << endl;
    cout << endl;
    cout << "Enter a choice: ";
    cin >> choice;

    cin.ignore();

    return choice;
}

void showList() {
    string line;
    int number = 1;

    ifstream inFile(
        fileName.c_str(), 
        ios::in
    );

    if (!inFile) {
        cout << "File not found." << endl;
        exit(1);
    }

    getline(inFile, line);

    cout << endl << "To-do list" << endl << string(10, '-') << endl;
    while (!inFile.eof()) {
        cout << number << ". " <<  line << endl;
        getline(inFile, line);
        number ++;
    }

    inFile.close();

    cout << endl << endl << endl;
}

void addItem() {
    ofstream outFile(
        fileName.c_str(),
        ios::app
    );

    if (!outFile) {
        cout << "File not found." << endl;
        exit(1);
    }

    string item;

    cout << "Enter an item: ";
    getline(cin, item);

    outFile << item << endl;

    outFile.close();

    cout << endl;
}

void removeItem() {
    int choice;
    showList();
    vector<string> items;
    int number = 1;
    string item;

    cout << "Which item do you want to reamove? ";
    cin >> choice;

    cin.ignore();

    ifstream inFile(
        fileName.c_str(),
        ios::in
    );

    if (!inFile) {
        cout << "File not found." << endl;
        exit(1);
    }

    getline(inFile, item);

    while (!inFile.eof()) {
        if (number != choice) {
            items.push_back(item);
        }

        number ++;
        getline(inFile, item);
    }

    inFile.close();

    ofstream outFile(
        fileName.c_str(),
        ios::out
    );

    if (!outFile) {
        cout << "File not fount. " << endl;
        exit(1);
    }

    for (int i = 0; i < items.size(); i ++) {
        outFile << items[i] << endl;
    }

    outFile.close();
}

int main() {
    int choice;

    while (choice != 0) {
        choice = menu();

        switch(choice) {
            case 1:
                showList();
                break;
            case 2:
                addItem();
                break;
            case 3:
                removeItem();
                break;
            case 0:
                // End program.
                break;
            default:
                cout << "Don't recognize input.";
        }
    }
}