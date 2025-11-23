#include <iostream>
using namespace std;

int main() {
    int* arr = new int[5]; // Allocating an array of 5 integers on the heap
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 2; // Initializing the array
    }

    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    delete[] arr; // Freeing the allocated memory
    return 0;
}
