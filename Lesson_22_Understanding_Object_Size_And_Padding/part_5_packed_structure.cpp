#include <iostream>
#include <cstddef>

#pragma pack(push, 1) // Set the packing alignment to 1 byte
struct PackedExample {
    char a;       // 1 byte
    int b;        // 4 bytes
    short c;      // 2 bytes
};
#pragma pack(pop) // Restore the default alignment

int main() {
    std::cout << "Size of PackedExample: " << sizeof(PackedExample) << " bytes" << std::endl;
    return 0;
}
