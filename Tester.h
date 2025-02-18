// Tester.h - Corrected Header File
#ifndef TESTER_H
#define TESTER_H

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_set>
using namespace std;

class Tester {
  public:
    // Output Capture Methods
    void initCapture();
    void endCapture();
    
    // Utility Methods
    void clearInputBuffer();
    void pressEnterToContinue();
    
    // String Search Methods
    void find(const vector<int>& keys, const string* search, int& error);
    void find(const vector<int>& keys, const vector<string>& search, int& error);
    void findInOrder(const vector<string>& toFind, int& error);
    void confirmAbsent(const vector<string>& absent, int& error);
    
    // Random Number Generation Methods
    void ran(vector<int>& list, int count, int range);
    int ran(int range_from, int range_to);

    // Retrieve Captured Output
    string getOutput() { return output; }

  private:
    streambuf* oldCoutStreamBuf;
    ostringstream strCout;
    string output;
};

#endif
