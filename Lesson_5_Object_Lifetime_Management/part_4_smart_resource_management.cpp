#include <iostream>
#include <memory>

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

void createSmartResource() {
    std::unique_ptr<Resource> res = std::make_unique<Resource>();
    // Smart pointer automatically manages memory
} // res is destroyed, and memory is automatically released

int main() {
    createSmartResource();
    return 0;
}
