// main.cc
#include <iostream>
#include "TestControl.h"
#include <unistd.h>  // for usleep (if needed)

using namespace std;

int main() {
    TestControl tcontrol;

    cout << "Launching Tutorial 5 Tests..." << endl;
    tcontrol.launch(); // Run the main control for tests

    cout << "\nAll Tests Completed. Exiting.\n";
    return 0;
}
