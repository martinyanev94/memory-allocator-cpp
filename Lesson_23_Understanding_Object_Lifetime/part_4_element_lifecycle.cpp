#include <iostream>
#include <vector>

class Element {
public:
    Element(int value) : value(value) {
        std::cout << "Element " << value << " constructed." << std::endl;
    }

    ~Element() {
        std::cout << "Element " << value << " destructed." << std::endl;
    }

private:
    int value;
};

int main() {
    std::vector<Element> elements;
    elements.emplace_back(1); // Construct and add Element 1 to the vector
    elements.emplace_back(2); // Construct and add Element 2 to the vector
    elements.emplace_back(3); // Construct and add Element 3 to the vector

    std::cout << "Vector is going out of scope." << std::endl;
    return 0;
}
