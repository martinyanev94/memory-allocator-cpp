class DynamicObject {
public:
    DynamicObject() {
        std::cout << "DynamicObject created" << std::endl;
    }
    ~DynamicObject() {
        std::cout << "DynamicObject destructed" << std::endl;
    }
};

void useDynamicObject() {
    DynamicObject* dynObj = new DynamicObject(); // Dynamically allocated object
    // Do something with dynObj

    delete dynObj; // Need to manually free memory
}
