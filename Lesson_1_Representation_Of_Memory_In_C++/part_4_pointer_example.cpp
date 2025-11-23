#include <iostream>
using namespace std;

int main() {
    int value = 30;
    int* ptr = &value; // Pointer initialization
    cout << "Value: " << value << endl; // Outputs the value directly
    cout << "Pointer points to value: " << *ptr << endl; // Dereference the pointer to get value
    cout << "Address of value: " << ptr << endl; // Pointer holds the address of value
    return 0;
}
