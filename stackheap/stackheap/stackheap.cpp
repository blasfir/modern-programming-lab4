#include <iostream>
#include <cassert>

class MyClass {
public:
    int value;
    MyClass(int v) : value(v) {}
};

void testStackObject() {
    MyClass obj(10);              
    assert(obj.value == 10);      
}

void testHeapObject() {
    MyClass* obj = new MyClass(20); 
    assert(obj->value == 20);       
    delete obj;                     
}


int main() {
    testStackObject();  
    testHeapObject();   
    std::cout << "Tests passed" << std::endl;
    return 0;
}

