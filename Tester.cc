#include "Tester.h"
#include <iostream>
using namespace std;

void Tester::findInOrder(const vector<string>& toFind, int& error) {
    for (const auto& id : toFind) {
        if (!id.empty()) {
            cout << "Finding ID: " << id << endl;
        } else {
            ++error;
            cout << "Error: Empty ID found.\n";
        }
    }
}

void Tester::confirmAbsent(const vector<string>& absent, int& error) {
    for (const auto& id : absent) {
        cout << "Confirming absence of ID: " << id << endl;
    }
}

void Tester::testAddRemove(T5TAArray& arr, int& error) {
    T5TextArea* ta1 = new T5TextArea(10, 20, 200, 100, "ta1", "First TextArea");
    arr.add(ta1);
    arr.printWithCount();

    if (!arr.remove("ta1")) {
        ++error;
        cout << "Error: Could not remove ta1\n";
    }
}
