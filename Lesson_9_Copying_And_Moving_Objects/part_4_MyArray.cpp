class MyArray {
private:
    int* arr;
    size_t size;

public:
    MyArray(size_t s) : size(s) {
        arr = new int[size];
    }

    MyArray(const MyArray& other) : size(other.size) {
        arr = new int[size];
        for (size_t i = 0; i < size; ++i) {
            arr[i] = other.arr[i];
        }
    }

    MyArray& operator=(const MyArray& other) {
        if (this != &other) {
            delete[] arr;
            size = other.size;
            arr = new int[size];
            for (size_t i = 0; i < size; ++i) {
                arr[i] = other.arr[i];
            }
        }
        return *this;
    }

    ~MyArray() {
        delete[] arr;
    }
};
