#include <vector>

class Example {
public:
    int value;
    Example(int v) : value(v) {}

    // Move Constructor
    Example(Example&& other) noexcept : value(other.value) {
        other.value = 0; // Leave in a valid state
    }

    // Move Assignment Operator
    Example& operator=(Example&& other) noexcept {
        if (this != &other) {
            value = other.value;
            other.value = 0; // Leave in a valid state
        }
        return *this;
    }
};

// Using Example with std::vector
int main() {
    std::vector<Example> examples;
    examples.reserve(2); // Reserve space to avoid reallocation
    examples.emplace_back(Example(1)); // Move constructed
    examples.emplace_back(Example(2)); // Move constructed
}
