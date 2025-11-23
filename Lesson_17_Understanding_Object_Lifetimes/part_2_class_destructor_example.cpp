class A {
public:
    A() { std::cout << "A constructor\n"; }
    ~A() { std::cout << "A destructor\n"; }
};

class B {
public:
    B() { std::cout << "B constructor\n"; }
    ~B() { std::cout << "B destructor\n"; }
    A a;
};

int main() {
    B b;
    return 0;
}
A constructor
B destructor
A destructor
