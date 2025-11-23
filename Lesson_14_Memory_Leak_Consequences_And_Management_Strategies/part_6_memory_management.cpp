#include <iostream>

void correctOwnership(int* pointer) {
    // Suppose we take ownership of the memory here
    delete pointer;  // Properly delete the resource
}

void incorrectOwnership() {
    int* leakedPointer = new int(10);
    // Ownership of leakedPointer is not passed correctly
    // No delete statement here leads to a leak
}
