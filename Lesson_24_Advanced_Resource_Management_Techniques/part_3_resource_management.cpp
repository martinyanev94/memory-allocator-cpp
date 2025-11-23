#include <iostream>
#include <utility>

class Resource {
public:
    Resource(size_t size) : size(size), data(new int[size]) {
        std::cout << "Resource of size " << size << " allocated." << std::endl;
    }

    ~Resource() {
        delete[] data;
        std::cout << "Resource of size " << size << " deallocated." << std::endl;
    }

    Resource(const Resource& other) : size(other.size), data(new int[other.size]) {
        std::memcpy(data, other.data, size * sizeof(int));
        std::cout << "Resource copied." << std::endl;
    }

    Resource& operator=(Resource other) { // Pass by value
        std::swap(size, other.size);
        std::swap(data, other.data);
        return *this;
    }

private:
    size_t size;
    int* data;
};

int main() {
    Resource resource1(10);
    Resource resource2(15);
    resource2 = resource1; // Copy-and-swap
    return 0;
}
