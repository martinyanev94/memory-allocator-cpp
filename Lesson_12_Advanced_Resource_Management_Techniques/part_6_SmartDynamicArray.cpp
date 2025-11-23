#include <memory>

class SmartDynamicArray {
private:
    std::unique_ptr<int[]> array;
    size_t size;

public:
    SmartDynamicArray(size_t size) : size(size), array(std::make_unique<int[]>(size)) {
        std::cout << "SmartDynamicArray of size " << size << " created.\n";
    }

    // The destructor is automatically managed by unique_ptr
    // No need for manual resource management

    // Members can still be added here
};
