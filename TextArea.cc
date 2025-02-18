// TextArea.cc
#include "TextArea.h"
#include <iostream>
using namespace std;

// Constructor
TextArea::TextArea(int x, int y, int w, int h, string tid, string ttxt, 
                   RGB f, RGB b) 
  : id(tid), text(ttxt), dimensions{x, y, w, h}, fill(f), border(b) {}

// Overlaps Method
bool TextArea::overlaps(const TextArea& ta) const {
    return dimensions.overlaps(ta.dimensions);
}

// Print Method
void TextArea::print() const {
    cout << "TextArea \"" << id << "\": \"" << text << "\" "
         << "at (" << dimensions.x << ", " << dimensions.y << ") "
         << "Size: " << dimensions.width << "x" << dimensions.height << "\n"
         << "Fill Color: "; fill.print();
    cout << "Border Color: "; border.print();
}
