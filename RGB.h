#ifndef RGB_H
#define RGB_H

#include <iostream>
using namespace std;

class RGB {
    int red, green, blue;
public:
    RGB(int r = 255, int g = 255, int b = 255) : red(r), green(g), blue(b) {}
    void print() const { cout << "(" << red << "," << green << "," << blue << ")"; }
    static RGB WHITE() { return RGB(255, 255, 255); }
    static RGB BLACK() { return RGB(0, 0, 0); }
};
#endif
