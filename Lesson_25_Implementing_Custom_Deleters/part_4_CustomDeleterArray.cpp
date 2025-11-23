#include <iostream>
#include <functional>

class CustomDeleterArray {
private:
    int* data;
    size_t size;

public:
    CustomDeleterArray(size_t sz, std::function<void(int*)> deleter)
        : size(sz), customDeleter(deleter) {
        data = new int[size];
        std::cout << "CustomDeleterArray created.\n";
    }

    // Destructor
    ~CustomDeleterArray() {
        customDeleter(data);
        std::cout << "CustomDeleterArray deleted.\n";
    }

private:
    std::function<void(int*)> customDeleter;
};

void customDelete(int* ptr) {
    delete[] ptr;
    std::cout << "Custom deleter function called.\n";
}
