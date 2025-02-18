#ifndef T5TAARRAY_H
#define T5TAARRAY_H

#include "TAArray.h"
using namespace std;

class T5TAArray : public TAArray {
public:
    void printWithCount() const {
        cout << "Number of TextAreas: " << getSize() << "\n";
        print();
    }
};
#endif
