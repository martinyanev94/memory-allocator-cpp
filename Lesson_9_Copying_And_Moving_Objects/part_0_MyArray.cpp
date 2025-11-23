class MyArray {
private:
    int* arr;
    size_t size;

public:
    MyArray(size_t s) : size(s) {
        arr = new int[size]; // dynamic allocation
    }

    ~MyArray() {
        delete[] arr; // cleanup memory
    }
};
