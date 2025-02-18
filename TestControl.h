
#ifndef TESTCONTROL_H
#define TESTCONTROL_H

#include "View.h"
#include "Tester.h"
#include <vector>
#include <string>
using namespace std;

class TestControl {
  public:
    
    void launch();

  private:
    
    void testTextAreas();
    void testTAArray();
    void testExtendedTutorial5();

    
    View view;
    Tester tester;

    
    static vector<string> menu;
};

#endif
