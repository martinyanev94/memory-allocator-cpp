void createObject() {
    A a; // This object is automatic; it will go out of scope when this function exits.
    B b; // This object will also be destroyed when the function exits.
    // Do something with a and b...
}

int main() {
    createObject();
    return 0;
}
