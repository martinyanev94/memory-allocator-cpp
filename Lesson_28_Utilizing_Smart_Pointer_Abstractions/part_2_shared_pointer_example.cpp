#include <iostream>
#include <memory>

void useSharedPointer() {
    std::shared_ptr<int> p1(new int(42)); // Create a shared pointer
    {
        std::shared_ptr<int> p2 = p1; // p2 shares ownership
        std::cout << "Shared pointer value: " << *p2 << std::endl;
        std::cout << "Reference count: " << p1.use_count() << std::endl; // Should print 2
    } // p2 goes out of scope; reference count drops to 1

    std::cout << "Reference count after p2 scope: " << p1.use_count() << std::endl; // Should print 1
}

int main() {
    useSharedPointer();
    return 0;
}
