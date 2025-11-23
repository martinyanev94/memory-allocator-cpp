#include <iostream>
using namespace std;

class MyClass {
private:
    int *data;
public:
    MyClass(int size) {
        data = new int[size]; // Allocate memory
        for (int i = 0; i < size; ++i)
            data[i] = i;
    }
    ~MyClass() {
        delete[] data; // Free memory
    }
    void display(int size) {
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MyClass obj(5); // Object creation
    obj.display(5); // Display data
    return 0;
}
