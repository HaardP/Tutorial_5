// T5TextArea.h
#ifndef T5TEXTAREA_H
#define T5TEXTAREA_H
#include "TextArea.h"
#include <iostream>
using namespace std;

class T5TextArea : public TextArea {
  public:
    // Constructor
    T5TextArea(int x, int y, int w, int h, string tid, string ttxt, 
               RGB f = RGB::WHITE(), RGB b = RGB::BLACK());

    // Extended Display Method
    void displayDetails() const;
};
#endif
