#include <vector>

int main() {
    std::vector<DynamicArray> vec;

    vec.emplace_back(10); // Calls constructor
    vec.emplace_back(20); // Calls constructor
    DynamicArray arr = std::move(vec[0]); // Calls move constructor

    vec[1] = std::move(arr); // Calls move assignment operator

    return 0; // At the end, all destructors will be called automatically
}
