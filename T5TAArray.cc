
#include "T5TAArray.h"
#include <iostream>
using namespace std;


T5TAArray::T5TAArray() : TAArray() {}


void T5TAArray::printWithCount() const {
    cout << "Total TextAreas: " << getSize() << "\n";
    print(); 
}

TextArea* T5TAArray::findById(const string& searchId) const {
    for (int i = 0; i < getSize(); ++i) {
        TextArea* ta = get(i);
        if (ta && ta->getId() == searchId) {
            return ta;
        }
    }
    return nullptr;
}


bool T5TAArray::removeById(const string& removeId) {
    for (int i = 0; i < getSize(); ++i) {
        if (get(i) && get(i)->getId() == removeId) {
            delete get(i);
            for (int j = i; j < getSize() - 1; ++j) {
                elements[j] = elements[j + 1];
            }
            --size;
            return true;
        }
    }
    return false;
}
