#include <iostream>

class Resource {
public:
    Resource() {
        data = new int[10];
        std::cout << "Resource allocated." << std::endl;
    }

    ~Resource() {
        delete[] data;
        std::cout << "Resource deallocated." << std::endl;
    }
    
private:
    int* data;
};

void createHeapResource() {
    Resource* res = new Resource(); // Heap allocation
    // Do something with res
    delete res; // Manual destruction
}

int main() {
    createHeapResource();
    return 0;
}
