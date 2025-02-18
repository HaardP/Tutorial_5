#ifndef TAARRAY_H
#define TAARRAY_H

#include "TextArea.h"
#include <vector>
using namespace std;

class TAArray {
protected:
    vector<TextArea*> areas;

public:
    virtual ~TAArray() {
        for (auto area : areas) {
            delete area;
        }
    }

    virtual bool add(TextArea* ta) {
        areas.push_back(ta);
        return true;
    }

    virtual bool remove(const string& id) {
        for (auto it = areas.begin(); it != areas.end(); ++it) {
            if ((*it)->getId() == id) {
                delete *it;
                areas.erase(it);
                return true;
            }
        }
        return false;
    }

    virtual TextArea* get(const string& id) const {
        for (auto area : areas) {
            if (area->getId() == id) {
                return area;
            }
        }
        return nullptr;
    }

    virtual void print() const {
        for (const auto& area : areas) {
            area->print();
        }
    }

    int getSize() const { return areas.size(); }
};
#endif
