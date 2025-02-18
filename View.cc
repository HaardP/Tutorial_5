
#include <iostream>
#include <string>
#include <vector>
#include "View.h"
using namespace std;

void View::menu(const vector<string>& menu, int& choice) {
    cout << "\nPlease make a selection:\n\n";
    for (size_t i = 0; i < menu.size(); ++i) {
        cout << "  (" << i + 1 << ") " << menu[i] << "\n";
    }
    cout << "  (0) Exit\n\n";

    cout << "Enter your selection: ";
    cin >> choice;
    if (choice == 0) return;

    while (choice < 0 || static_cast<size_t>(choice) > menu.size()) {
        cout << "Invalid selection. Enter your selection: ";
        cin >> choice;
    }
}

void View::getNumber(int& num) {
    cout << "Enter a number: ";
    cin >> num;
    while (num < 0) {
        cout << "Number cannot be negative. Enter again: ";
        cin >> num;
    }
}
