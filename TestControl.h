// TestControl.h - Corrected Header File
#ifndef TESTCONTROL_H
#define TESTCONTROL_H

#include "View.h"
#include "Tester.h"
#include <vector>
#include <string>
using namespace std;

class TestControl {
  public:
    // Launches the test control menu
    void launch();

  private:
    // Individual test methods
    void testTextAreas();
    void testTAArray();
    void testExtendedTutorial5();

    // Utilities
    View view;
    Tester tester;

    // Menu options
    static vector<string> menu;
};

#endif
