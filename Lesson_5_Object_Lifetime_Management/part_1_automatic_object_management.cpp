#include <iostream>

void createObject() {
    int a = 5; // Automatic object
    std::cout << "Value of a: " << a << std::endl;
} // 'a' is destroyed here

int main() {
    createObject();
    // 'a' is not accessible here; it has gone out of scope.
    return 0;
}
