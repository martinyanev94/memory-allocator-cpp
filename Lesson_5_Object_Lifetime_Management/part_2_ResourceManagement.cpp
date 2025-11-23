#include <iostream>

class Resource {
public:
    Resource() {
        data = new int[10]; // Allocation of dynamic memory
        std::cout << "Resource allocated." << std::endl;
    }
    
    ~Resource() {
        delete[] data; // Release memory in destructor
        std::cout << "Resource deallocated." << std::endl;
    }
    
private:
    int* data;
};

void createResource() {
    Resource res; // Automatic object
} // res is destroyed here, and resources are deallocated

int main() {
    createResource();
    // Resource is automatically cleaned up at the end of createResource
    return 0;
}
