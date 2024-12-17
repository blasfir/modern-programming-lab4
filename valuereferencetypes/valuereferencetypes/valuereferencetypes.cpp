#include <cassert> 
#include <iostream>

void modifyValue(int val) {
    val = 2;
}


void modifyReference(int& ref) {
    ref = 2;
}

void runTests() {
    int value = 1;
    modifyValue(value);
    assert(value == 1);

    int reference = 1;
    modifyReference(reference);
    assert(reference == 2);
}

int main() {
    runTests();
    std::cout << "Tests passed" << std::endl;
    return 0;
}