#include <iostream>
#include <utility>

class Container {
public:
    Container(int value) : data(new int(value)) {}

    ~Container() {
        delete data;
    }

    int setValue(int newValue) {
        return std::exchange(data, new int(newValue)); // Swap out old for new
    }

    void showValue() const {
        std::cout << "Value: " << *data << std::endl;
    }

private:
    int* data;
};

int main() {
    Container c(10);
    c.showValue();

    c.setValue(20);
    c.showValue();

    return 0;
}
