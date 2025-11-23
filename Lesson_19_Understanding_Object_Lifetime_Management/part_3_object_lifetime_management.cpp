#include <iostream>

class First {
public:
    First() { std::cout << "First object created\n"; }
    ~First() { std::cout << "First object destroyed\n"; }
};

class Second {
public:
    Second() { std::cout << "Second object created\n"; }
    ~Second() { std::cout << "Second object destroyed\n"; }
};

void scopeManagement() {
    First f;
    Second s;
} // s is destroyed first, then f

int main() {
    scopeManagement();
    return 0;
}
