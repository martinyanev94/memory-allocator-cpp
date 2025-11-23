class Sample {
public:
    Sample() { std::cout << "Constructor called." << std::endl; }
    ~Sample() { std::cout << "Destructor called." << std::endl; }
};

void destructorExample() {
    Sample obj; // Constructor is called
} // Destructor is called automatically when obj goes out of scope
