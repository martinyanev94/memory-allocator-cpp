#include <vector>

int main() {
    std::vector<Array> arrays;
    arrays.push_back(Array(10)); // Move semantic applied here, no copy happens
}
