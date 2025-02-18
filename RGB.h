// RGB.h
#ifndef RGB_H
#define RGB_H
#include "defs.h"
#include <iostream>
using namespace std;

class RGB {
  private:
    int red, green, blue;
  public:
    RGB(int r = 255, int g = 255, int b = 255);  // Constructor declaration
    static RGB WHITE();                          // Static methods declaration
    static RGB BLACK();
    static RGB RED();
    static RGB GREEN();
    static RGB BLUE();
    CuColour getColour() const;                  // Returns color as unsigned long
    void print() const;                          // Prints RGB values
};
#endif
