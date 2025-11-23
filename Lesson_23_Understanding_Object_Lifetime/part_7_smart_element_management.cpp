#include <iostream>
#include <memory>

class SmartElement {
public:
    SmartElement(int value) : value(value) {
        std::cout << "SmartElement " << value << " constructed." << std::endl;
    }

    ~SmartElement() {
        std::cout << "SmartElement " << value << " destructed." << std::endl;
    }

private:
    int value;
};

int main() {
    std::unique_ptr<SmartElement> element = std::make_unique<SmartElement>(10);
    std::cout << "SmartElement is created." << std::endl;

    // No explicit delete needed; it will be destructed automatically.
    return 0;
}
