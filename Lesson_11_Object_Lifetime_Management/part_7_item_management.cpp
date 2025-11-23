#include <iostream>
#include <vector>

class Item {
public:
    Item(int n) : number(n) { std::cout << "Item " << number << " created\n"; }
    ~Item() { std::cout << "Item " << number << " destroyed\n"; }
private:
    int number;
};

int main() {
    std::vector<Item> items; // Vector of automatic objects
    items.emplace_back(1);
    items.emplace_back(2);
    items.emplace_back(3);

    return 0;
}
