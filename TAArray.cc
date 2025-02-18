// TAArray.cc
#include "TAArray.h"
#include <iostream>
using namespace std;

// Constructor
TAArray::TAArray() : size(0) {
    elements = new TextArea*[MAX_COMPONENTS];
}

// Destructor (Frees All Allocated Memory)
TAArray::~TAArray() {
    for (int i = 0; i < size; ++i) {
        delete elements[i]; 
    }
    delete[] elements;
}

// Add Method (Adds TextArea to Array)
bool TAArray::add(TextArea* ta) {
    if (size >= MAX_COMPONENTS) return false; 
    elements[size++] = ta;
    return true;
}

// Get Method (Returns TextArea by Index)
TextArea* TAArray::get(int index) const {
    if (index < 0 || index >= size) return nullptr;
    return elements[index];
}

// Print Method (Displays All TextAreas in the Array)
void TAArray::print() const {
    cout << "TextAreas in Array (" << size << " total):" << endl;
    for (int i = 0; i < size; ++i) {
        if (elements[i]) {
            elements[i]->print();
            cout << "--------------------------------\n";
        }
    }
}

// Get Size (Returns Current Number of TextAreas)
int TAArray::getSize() const {
    return size;
}
