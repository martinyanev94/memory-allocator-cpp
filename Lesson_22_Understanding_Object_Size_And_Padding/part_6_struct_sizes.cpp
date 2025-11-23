#include <iostream>

struct Inner {
    char a;
    double b;
};

struct Outer {
    Inner inner;  // Contains an inner struct
    char c;
};

int main() {
    std::cout << "Size of Inner: " << sizeof(Inner) << std::endl;
    std::cout << "Size of Outer: " << sizeof(Outer) << std::endl;
    return 0;
}
