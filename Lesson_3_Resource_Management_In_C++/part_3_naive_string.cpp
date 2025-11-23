class naive_string {
private:
    char* p;

public:
    naive_string(const char* str) {
        p = new char[strlen(str) + 1];
        strcpy(p, str);
    }

    naive_string(const naive_string& other) { // Copy constructor
        p = new char[strlen(other.p) + 1];
        strcpy(p, other.p);
    }

    naive_string& operator=(const naive_string& other) { // Assignment operator
        if (this != &other) {
            delete[] p; // Prevent memory leak, delete existing resource
            p = new char[strlen(other.p) + 1];
            strcpy(p, other.p);
        }
        return *this;
    }

    ~naive_string() {
        delete[] p;
    }
};
