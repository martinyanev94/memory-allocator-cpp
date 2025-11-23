#include <iostream>

class ManagedResource {
public:
    ManagedResource() {
        resource = new int(100);
        std::cout << "Resource allocated with value " << *resource << std::endl;
    }

    ~ManagedResource() {
        delete resource;  // Automatic cleanup
        std::cout << "Resource deallocated" << std::endl;
    }

private:
    int* resource;
};

void testRAII() {
    ManagedResource res; // Memory allocation
    // res goes out of scope when the function ends
}
