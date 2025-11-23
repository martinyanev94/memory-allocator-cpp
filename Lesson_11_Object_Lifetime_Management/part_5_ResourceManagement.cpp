#include <iostream>

class Holder {
private:
    int* data;
public:
    Holder(int value) {
        data = new int(value); // Acquire resource
        std::cout << "Holder created, holding value: " << *data << "\n";
    }
    ~Holder() {
        delete data; // Release resource
        std::cout << "Holder destroyed\n";
    }
};

void example() {
    Holder holder(42); // Automatic object
}

int main() {
    example();
    return 0;
}
