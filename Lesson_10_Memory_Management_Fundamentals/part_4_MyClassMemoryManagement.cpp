class MyClass {
private:
    int* data;
public:
    MyClass(int value) {
        data = new int(value);
    }

    ~MyClass() {
        delete data;  // Free the heap memory
    }

    void display() const {
        std::cout << "Value: " << *data << std::endl;
    }
};
