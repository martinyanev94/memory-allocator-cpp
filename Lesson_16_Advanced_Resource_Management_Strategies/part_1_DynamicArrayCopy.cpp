class DynamicArray {
public:
    int* data;
    size_t size;

    DynamicArray(size_t s) : size(s) {
        data = new int[s];
    }

    ~DynamicArray() {
        delete[] data;
    }
};
DynamicArray array1(5);
DynamicArray array2 = array1; // Default copy constructor is called
