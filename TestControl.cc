
#include "TestControl.h"
#include "T5TextArea.h"
#include "T5TAArray.h"
#include <iostream>
using namespace std;


vector<string> TestControl::menu = {
    "1. Run TextArea Test",
    "2. Run TAArray Test",
    "3. Run Extended Tutorial 5 Tests",
    "4. Exit"
};


void TestControl::launch() {
    int choice = -1;
    while (choice != 4) {
        view.menu(menu, choice);
        switch (choice) {
            case 1: testTextAreas(); break;
            case 2: testTAArray(); break;
            case 3: testExtendedTutorial5(); break;
            case 4: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice. Try again.\n"; break;
        }
    }
}


void TestControl::testTextAreas() {
    cout << "\nRunning TextArea Test:\n";
    T5TextArea ta1(10, 10, 100, 30, "ta1", "Hello World");
    T5TextArea ta2(20, 50, 150, 40, "ta2", "Second Text");
    ta1.displayDetails();
    ta2.displayDetails();
    tester.pressEnterToContinue();
}


void TestControl::testTAArray() {
    cout << "\nRunning TAArray Test:\n";
    T5TAArray array;
    array.add(new T5TextArea(10, 10, 100, 30, "ta1", "First"));
    array.add(new T5TextArea(20, 50, 120, 40, "ta2", "Second"));
    array.printWithCount();
    tester.pressEnterToContinue();
}


void TestControl::testExtendedTutorial5() {
    cout << "\nRunning Extended Tutorial 5 Tests:\n";
    T5TAArray t5Array;
    t5Array.add(new T5TextArea(15, 25, 90, 30, "t1", "TA 1"));
    t5Array.add(new T5TextArea(25, 65, 110, 40, "t2", "TA 2"));
    t5Array.printWithCount();
    tester.pressEnterToContinue();
}
