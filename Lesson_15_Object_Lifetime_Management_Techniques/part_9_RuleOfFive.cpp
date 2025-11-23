class RuleOfFive {
    int* data;
public:
    RuleOfFive(int value) {
        data = new int(value);
    }

    ~RuleOfFive() {
        delete data;
    }

    // Copy Constructor
    RuleOfFive(const RuleOfFive& other) {
        data = new int(*other.data);
    }

    // Copy Assignment
    RuleOfFive& operator=(const RuleOfFive& other) {
        if (this != &other) {
            delete data;
            data = new int(*other.data);
        }
        return *this;
    }

    // Move Constructor
    RuleOfFive(RuleOfFive&& other) noexcept {
        data = other.data;
        other.data = nullptr;
    }

    // Move Assignment
    RuleOfFive& operator=(RuleOfFive&& other) noexcept {
        if (this != &other) {
            delete data;
            data = other.data;
            other.data = nullptr;
        }
        return *this;
    }
};
