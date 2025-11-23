class IntArrayDefault {
private:
    int* arr;
    size_t size;

public:
    IntArrayDefault(size_t s) : size(s) {
        arr = new int[size];
    }

    ~IntArrayDefault() {
        delete[] arr; 
    }
};
