#include <iostream>

struct Base {
    int x;
    char y;
};

struct Derived : Base {
    double z;
};

int main() {
    std::cout << "Size of Base: " << sizeof(Base) << " bytes" << std::endl;
    std::cout << "Size of Derived: " << sizeof(Derived) << " bytes" << std::endl;
    return 0;
}
