#include <iostream>

class DynamicObject {
public:
    DynamicObject() { std::cout << "DynamicObject created\n"; }
    ~DynamicObject() { std::cout << "DynamicObject destroyed\n"; }
};

void dynamicManagement() {
    DynamicObject* obj = new DynamicObject(); 
    // Do something with obj
    delete obj; // Explicit destruction
}

int main() {
    dynamicManagement();
    return 0;
}
