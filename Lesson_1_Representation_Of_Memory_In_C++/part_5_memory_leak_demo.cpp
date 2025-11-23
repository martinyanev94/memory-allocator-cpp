#include <iostream>
using namespace std;

void createMemoryLeak() {
    int* leak = new int; // Allocating memory
    *leak = 42; // Using the memory
    // Forgetting to delete the allocated memory, causes a leak
}

int main() {
    for (int i = 0; i < 1000; i++) {
        createMemoryLeak(); // Creating memory leaks repeatedly
    }
    cout << "Memory leak created!" << endl;
    return 0;
}
