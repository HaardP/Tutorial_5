// T5TextArea.cc
#include "T5TextArea.h"
#include <iostream>
using namespace std;

// Constructor (inherits from TextArea)
T5TextArea::T5TextArea(int x, int y, int w, int h, string tid, string ttxt, 
                       RGB f, RGB b)
  : TextArea(x, y, w, h, tid, ttxt, f, b) {}

// Display Method (adds extra label for Tutorial 5)
void T5TextArea::displayDetails() const {
    print();  // Call base class print method
    cout << "(Extended for Tutorial 5)\n";
}
