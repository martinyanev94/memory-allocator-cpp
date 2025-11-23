naive_string(const naive_string& other) {
    p = new char[strlen(other.p) + 1];
    strcpy(p, other.p);
}
void example() {
    naive_string str1("Hello");
    naive_string str2 = str1; // Triggers copy constructor
}
naive_string& operator=(const naive_string& other) {
    if (this != &other) {
        delete[] p; // Cleanup before resource allocation
        p = new char[strlen(other.p) + 1];
        strcpy(p, other.p);
    }
    return *this;
}
