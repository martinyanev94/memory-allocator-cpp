class Resource {
public:
    Resource() { std::cout << "Resource acquired\n"; }
    ~Resource() { std::cout << "Resource released\n"; }
};

void functionWithResource() {
    Resource res; // Resource is acquired here
    // Do work with res...
} // Resource is released automatically

int main() {
    functionWithResource();
    return 0;
}
