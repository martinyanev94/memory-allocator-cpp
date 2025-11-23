#include <iostream>

class Resource {
public:
    Resource(size_t size) : size(size), data(new int[size]) {
        std::cout << "Resource acquired: " << size << " integers allocated.\n";
    }

    ~Resource() {
        delete[] data;
        std::cout << "Resource released.\n";
    }
    
private:
    size_t size;
    int* data;
};
