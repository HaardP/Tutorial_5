#include "T5TextArea.h"
#include "T5TAArray.h"
#include <iostream>
using namespace std;

int main() {
    
    T5TextArea* ta1 = new T5TextArea(10, 20, 150, 75, "ta1", "Area 1");
    T5TextArea* ta2 = new T5TextArea(30, 40, 200, 100, "ta2", "Area 2");

    
    ta1->displayDetails();
    ta2->displayDetails();

   
    T5TAArray array;
    array.add(ta1);
    array.add(ta2);

    
    array.printWithCount();

    
    delete ta1;
    delete ta2;

    return 0;
}
