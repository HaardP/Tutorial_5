
#include "RGB.h"
#include <iostream>
using namespace std;

RGB::RGB(int r, int g, int b) : red(r), green(g), blue(b) {}


RGB RGB::WHITE() { return RGB(255, 255, 255); }
RGB RGB::BLACK() { return RGB(0, 0, 0); }
RGB RGB::RED()   { return RGB(255, 0, 0); }
RGB RGB::GREEN() { return RGB(0, 255, 0); }
RGB RGB::BLUE()  { return RGB(0, 0, 255); }


CuColour RGB::getColour() const {
    return (static_cast<CuColour>(red) << 16) | 
           (static_cast<CuColour>(green) << 8) | 
            static_cast<CuColour>(blue);
}

void RGB::print() const {
    cout << "RGB(" << red << "," << green << "," << blue << ")" << endl;
}
