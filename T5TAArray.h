// T5TAArray.h
#ifndef T5TAARRAY_H
#define T5TAARRAY_H
#include "TAArray.h"
#include <string>
using namespace std;

class T5TAArray : public TAArray {
  public:
    T5TAArray();                        // Constructor
    void printWithCount() const;       // Print All TextAreas with Count
    TextArea* findById(const string& searchId) const; // Find TextArea by ID
    bool removeById(const string& removeId);          // Remove TextArea by ID
};
#endif
