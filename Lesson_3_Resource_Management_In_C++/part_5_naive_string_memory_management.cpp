#include <memory>
#include <cstring>
#include <iostream>

class naive_string {
private:
    std::unique_ptr<char[]> p; // Using unique_ptr for automatic cleanup

public:
    naive_string(const char* str): p(new char[strlen(str) + 1]) {
        strcpy(p.get(), str);
    }

    void display() {
        std::cout << p.get() << std::endl;
    }
};
