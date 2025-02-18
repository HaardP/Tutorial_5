#ifndef T5TEXTAREA_H
#define T5TEXTAREA_H

#include "TextArea.h"
#include <iostream>
using namespace std;

class T5TextArea : public TextArea {
public:
    T5TextArea(int x, int y, int w, int h, string tid, string ttxt,
               RGB f = RGB::WHITE(), RGB b = RGB::BLACK())
        : TextArea(x, y, w, h, tid, ttxt, f, b) {}

    void displayDetails() const {
        print();
        cout << "(Extended for Tutorial 5)\n";
    }
};
#endif
