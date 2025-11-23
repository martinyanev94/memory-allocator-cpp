#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int* myArray = new int[size]; // Dynamic array allocation

    for (int i = 0; i < size; ++i) {
        myArray[i] = i * 10; // Initializing values
    }

    for (int i = 0; i < size; ++i) {
        cout << "Array element at index " << i << ": " << myArray[i] << endl;
    }

    delete[] myArray; // Free the allocated memory
    return 0;
}
