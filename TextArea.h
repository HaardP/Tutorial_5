#ifndef TEXTAREA_H
#define TEXTAREA_H

#include <string>
#include <iostream>
using namespace std;

class TextArea {
  protected:
    string id;
    string text;
    int x, y, width, height; 

  public:
    TextArea(int x, int y, int w, int h, string tid, string ttxt)
      : x(x), y(y), width(w), height(h), id(tid), text(ttxt) {}

    virtual void print() const {
        cout << "TextArea[" << id << "] at (" << x << ", " << y 
             << ") Size: " << width << "x" << height 
             << " Text: " << text << endl;
    }

    virtual ~TextArea() = default;
};
#endif
