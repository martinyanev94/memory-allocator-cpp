naive_string(naive_string&& other) noexcept : p(other.p) {
    other.p = nullptr; // Transfer resource ownership
}
naive_string createString() {
    naive_string temp("Temporary String");
    return temp; // Here, the move constructor is invoked
}

int main() {
    naive_string myString = createString(); // Move assignment
}
naive_string& operator=(naive_string&& other) noexcept {
    if (this != &other) {
        delete[] p;
        p = other.p;
        other.p = nullptr; // Leave other in a safe state
    }
    return *this;
}
