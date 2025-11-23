class RuleOfThree {
    int* data;
public:
    RuleOfThree(int value) {
        data = new int(value);
    }
    
    ~RuleOfThree() {
        delete data;
    }
    
    RuleOfThree(const RuleOfThree& other) { // Copy constructor
        data = new int(*other.data);
    }

    RuleOfThree& operator=(const RuleOfThree& other) { // Copy assignment
        if (this != &other) {
            delete data; // Clean up existing resource
            data = new int(*other.data);
        }
        return *this;
    }
};
