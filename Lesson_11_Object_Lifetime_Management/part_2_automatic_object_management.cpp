#include <iostream>

class Object {
public:
    Object() { std::cout << "Object created\n"; }
    ~Object() { std::cout << "Object destroyed\n"; }
};

void createObject() {
    Object obj; // Automatic object
}

int main() {
    createObject(); // Entering createObject scope
    return 0; // Exiting main scope
}
