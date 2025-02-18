// TAArray.h
#ifndef TAARRAY_H
#define TAARRAY_H
#include "TextArea.h"
#include <iostream>
using namespace std;

class TAArray {
  protected:
    TextArea** elements;
    int size;

  public:
    TAArray();                       // Constructor
    virtual ~TAArray();              // Destructor
    virtual bool add(TextArea* ta);  // Add TextArea
    virtual TextArea* get(int index) const; // Get TextArea by Index
    virtual void print() const;      // Print All TextAreas
    virtual int getSize() const;     // Get Number of Stored Areas
};
#endif
