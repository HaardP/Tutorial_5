// Tester.cc - Corrected Full Implementation
#include "Tester.h"
#include <iostream>
#include <string>
#include <random>
#include <unordered_set>
using namespace std;

// Press Enter to Continue
void Tester::pressEnterToContinue() {
    cout << "Press Enter to continue...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

// Clear Input Buffer
void Tester::clearInputBuffer() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// Find Strings from Array
void Tester::find(const vector<int>& keys, const string* search, int& error) {
    string::size_type found;
    error = 0;
    for (int key : keys) {
        found = output.find(search[key]);
        if (found == string::npos) {
            cout << search[key] << " not found" << endl;
            ++error;
        }
    }
}

// Find Strings from Vector
void Tester::find(const vector<int>& keys, const vector<string>& search, int& error) {
    string::size_type found;
    error = 0;
    for (int key : keys) {
        found = output.find(search[key]);
        if (found == string::npos) {
            cout << search[key] << " not found" << endl;
            ++error;
        }
    }
}

// Find Strings in Order
void Tester::findInOrder(const vector<string>& toFind, int& error) {
    string::size_type found = 0;
    error = 0;
    for (const string& item : toFind) {
        found = output.find(item, found + 1);
        if (found == string::npos) {
            cout << item << " not found in order" << endl;
            ++error;
        }
    }
}

// Confirm Absence of Strings
void Tester::confirmAbsent(const vector<string>& absent, int& error) {
    string::size_type found;
    error = 0;
    for (const string& item : absent) {
        found = output.find(item);
        if (found != string::npos) {
            cout << item << " found but should not be" << endl;
            ++error;
        }
    }
}

// Capture Standard Output
void Tester::initCapture() {
    oldCoutStreamBuf = cout.rdbuf();
    cout.rdbuf(strCout.rdbuf());
}

// End Capture and Store Output
void Tester::endCapture() {
    cout.rdbuf(oldCoutStreamBuf);
    output = strCout.str();
    cout << output;
}

// Generate Random Number
int Tester::ran(int range_from, int range_to) {
    random_device rand_dev;
    mt19937 generator(rand_dev());
    uniform_int_distribution<int> distr(range_from, range_to - 1);
    return distr(generator);
}

// Generate Random Numbers in Vector
void Tester::ran(vector<int>& list, int count, int range) {
    unordered_set<int> s;
    while (s.size() < static_cast<size_t>(count)) {
        s.insert(ran(0, range));
    }
    for (int val : s) {
        list.push_back(val);
    }
}
