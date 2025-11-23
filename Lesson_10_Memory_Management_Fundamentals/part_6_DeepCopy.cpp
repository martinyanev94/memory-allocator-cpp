class DeepCopy {
private:
    int* data;
public:
    DeepCopy(int value) {
        data = new int(value);
    }

    // Copy constructor
    DeepCopy(const DeepCopy& other) {
        data = new int(*(other.data)); // Deep copy
    }
    
    ~DeepCopy() {
        delete data;
    }
};
