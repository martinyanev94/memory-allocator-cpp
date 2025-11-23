int main() {
    naive_string myString("Hello, World!");
    // do something with myString
    return 0;
}
class naive_string {
private:
    char* p;

public:
    naive_string(const char* str) {
        p = new char[strlen(str) + 1];
        strcpy(p, str);
    }
    // Destructor omitted! 
};
