#include <iostream>

class Data {
public:
    Data(int value) : value(value) {
        std::cout << "Data " << value << " constructed." << std::endl;
    }

    ~Data() {
        std::cout << "Data " << value << " destructed." << std::endl;
    }

private:
    int value;
};

int main() {
    {
        Data a(1); // Constructed in this block
        {
            Data b(2); // Constructed in a nested block
            // b will be destructed at the end of this nested block
        } // b is destructed here

        // a will still exist here
    } // a is destructed here

    return 0;
}
