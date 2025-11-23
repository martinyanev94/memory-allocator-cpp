#include <iostream>

class DynamicObject {
public:
    DynamicObject() { std::cout << "DynamicObject created\n"; }
    ~DynamicObject() { std::cout << "DynamicObject destroyed\n"; }
};

int main() {
    DynamicObject* dynamicObj = new DynamicObject(); // Creating dynamic object
    // Use dynamicObj...

    delete dynamicObj; // Must delete to avoid memory leak
    return 0;
}
