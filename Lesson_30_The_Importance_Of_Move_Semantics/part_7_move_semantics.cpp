#include <iostream>

MoveArray createArray(size_t size) {
    MoveArray temp(size); // Create a temporary object
    return temp;         // Return the temporary object (move occurs here)
}

int main() {
    MoveArray arr = createArray(10); // Move semantics in action

    return 0;
}
