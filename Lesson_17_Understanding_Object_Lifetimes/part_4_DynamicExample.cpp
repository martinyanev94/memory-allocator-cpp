class DynamicExample {
public:
    DynamicExample() { std::cout << "DynamicExample created\n"; }
    ~DynamicExample() { std::cout << "DynamicExample destroyed\n"; }
};

int main() {
    DynamicExample* obj = new DynamicExample();
    
    // Do something with obj here...

    delete obj; // Proper cleanup
    return 0;
}
