#include <vector>
#include <string>
#include <iostream>

class BigData {
private:
    std::vector<std::string> data;

public:
    BigData(size_t size) : data(size) {}

    // Move constructor
    BigData(BigData&& other) noexcept : data(std::move(other.data)) {
        // other.data is now in a safe empty state
    }
};

BigData createBigData(size_t size) {
    BigData temp(size);
    return temp; // move semantics
}

int main() {
    BigData big = createBigData(1000000); // efficient due to move constructor
    return 0;
}
