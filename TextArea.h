// TextArea.h
#ifndef TEXTAREA_H
#define TEXTAREA_H
#include "defs.h"
#include "RGB.h"
#include <string>
using namespace std;

class TextArea {
  private:
    string id, text;
    Rectangle dimensions;
    RGB fill, border;

  public:
    // Constructor (declaration only)
    TextArea(int x, int y, int w, int h, string tid, string ttxt, 
             RGB f = RGB::WHITE(), RGB b = RGB::BLACK());

    // Method Declarations
    bool overlaps(const TextArea& ta) const;
    void print() const;

    // Getter for ID (useful for T5TAArray)
    string getId() const { return id; }
};
#endif
