
#ifndef T5TEXTAREA_H
#define T5TEXTAREA_H
#include "TextArea.h"
#include <iostream>
using namespace std;

class T5TextArea : public TextArea {
  public:
  
    T5TextArea(int x, int y, int w, int h, string tid, string ttxt, 
               RGB f = RGB::WHITE(), RGB b = RGB::BLACK());

    
    void displayDetails() const;
};
#endif
