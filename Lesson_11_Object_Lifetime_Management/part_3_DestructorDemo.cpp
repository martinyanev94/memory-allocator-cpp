#include <iostream>

class First {
public:
    First() { std::cout << "First created\n"; }
    ~First() { std::cout << "First destroyed\n"; }
};

class Second {
public:
    Second() { std::cout << "Second created\n"; }
    ~Second() { std::cout << "Second destroyed\n"; }
};

void function() {
    First first;
    Second second;
    // When we exit the function, destructors will be called in reverse order
}

int main() {
    function();
    return 0;
}
