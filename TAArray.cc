#include "TAArray.h"
#include <iostream>
using namespace std;

bool TAArray::add(TextArea* ta) {
    areas.push_back(ta);
    return true;
}

bool TAArray::remove(const string& id) {
    for (auto it = areas.begin(); it != areas.end(); ++it) {
        if ((*it)->getId() == id) {
            delete *it;
            areas.erase(it);
            return true;
        }
    }
    return false;
}

TextArea* TAArray::get(const string& id) const {
    for (auto area : areas) {
        if (area->getId() == id) {
            return area;
        }
    }
    return nullptr;
}

void TAArray::print() const {
    for (const auto& area : areas) {
        area->print();
    }
}
