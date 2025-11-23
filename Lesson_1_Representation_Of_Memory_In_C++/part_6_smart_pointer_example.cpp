#include <iostream>
#include <memory> // Required for smart pointers
using namespace std;

int main() {
    unique_ptr<int> p1(new int(10)); // Allocating memory
    cout << "Value pointed by p1: " << *p1 << endl;

    // unique_ptr cannot be copied, but can be moved
    unique_ptr<int> p2 = move(p1); // p1 is now empty
    cout << "Value pointed by p2: " << *p2 << endl;

    return 0;
}
