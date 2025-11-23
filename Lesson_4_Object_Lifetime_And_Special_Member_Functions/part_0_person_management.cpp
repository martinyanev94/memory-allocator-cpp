class Person {
public:
    Person(const std::string& name) : name(name) {
        std::cout << "Constructor called for " << name << std::endl;
    }
    
    ~Person() {
        std::cout << "Destructor called for " << name << std::endl;
    }
    
private:
    std::string name;
};

void createPeople() {
    Person alice("Alice");
    Person bob("Bob");
    Person charlie("Charlie");
}

int main() {
    createPeople();
    return 0;
}
