#ifndef TESTER_H
#define TESTER_H

#include "T5TAArray.h"
#include <vector>
#include <string>
using namespace std;

class Tester {
public:
    void findInOrder(const vector<string>& toFind, int& error);
    void confirmAbsent(const vector<string>& absent, int& error);
    void testAddRemove(T5TAArray& arr, int& error);
};
#endif
