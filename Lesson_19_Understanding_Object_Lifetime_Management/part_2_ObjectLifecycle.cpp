#include <iostream>

class SimpleObject {
public:
    SimpleObject() { std::cout << "Constructor: Object created\n"; }
    ~SimpleObject() { std::cout << "Destructor: Object destroyed\n"; }
};

void createObject() {
    SimpleObject obj; // obj's lifespan is tied to this function's scope
    std::cout << "Inside createObject function\n";
} // Here, obj is destructed automatically

int main() {
    createObject();
    std::cout << "Returned from createObject function\n";
    return 0; 
}
