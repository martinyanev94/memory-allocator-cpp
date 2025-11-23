#include <iostream>
#include <stdexcept>

class CustomVector {
public:
    CustomVector() : size(0), capacity(1), data(new int[capacity]) {}

    ~CustomVector() {
        delete[] data;
    }

    void push_back(int value) {
        if (size >= capacity) {
            resize();
        }
        data[size++] = value;
    }

    int operator[](size_t index) const {
        if (index >= size) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[index];
    }

    size_t getSize() const {
        return size;
    }

private:
    void resize() {
        capacity *= 2; // Double the capacity
        int* newData = new int[capacity];
        for (size_t i = 0; i < size; ++i) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
    }

    size_t size;
    size_t capacity;
    int* data;
};

int main() {
    CustomVector vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    for (size_t i = 0; i < vec.getSize(); ++i) {
        std::cout << vec[i] << std::endl;
    }
    return 0;
}
