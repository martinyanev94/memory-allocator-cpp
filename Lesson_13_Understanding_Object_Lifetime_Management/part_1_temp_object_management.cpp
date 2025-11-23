#include <iostream>

class TempObject {
public:
    TempObject() {
        std::cout << "TempObject created" << std::endl;
    }
    ~TempObject() {
        std::cout << "TempObject destructed" << std::endl;
    }
};
void createTemp() {
    TempObject obj; // Automatic object
    // The object is automatically destructed when it goes out of scope
}
