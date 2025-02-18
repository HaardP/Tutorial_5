#include "TextArea.h"
#include <iostream>
using namespace std;

void TextArea::print() const {
    cout << "ID: " << id << ", Text: " << text
         << ", Dimensions: (" << x << ", " << y << ", "
         << width << "x" << height << ")"
         << ", Fill Color: "; fill.print();
    cout << ", Border Color: "; border.print();
    cout << endl;
}
