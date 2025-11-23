class First {
public:
    First() {
        std::cout << "First created" << std::endl;
    }
    ~First() {
        std::cout << "First destructed" << std::endl;
    }
};

class Second {
public:
    Second() {
        std::cout << "Second created" << std::endl;
    }
    ~Second() {
        std::cout << "Second destructed" << std::endl;
    }
};

void demonstrateDestructionOrder() {
    First f;
    Second s;
}
Second created
Second destructed
First destructed
