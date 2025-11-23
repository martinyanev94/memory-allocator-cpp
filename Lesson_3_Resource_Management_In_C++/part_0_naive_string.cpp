class naive_string {
private:
    char* p; // Pointer to a dynamic memory allocation for a string

public:
    naive_string(const char* str) {
        p = new char[strlen(str) + 1]; // Allocate memory
        strcpy(p, str); // Copy the input string to our allocated memory
    }

    ~naive_string() {
        delete[] p; // Deallocate memory when the object is destroyed
    }
};
