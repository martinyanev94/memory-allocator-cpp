class Resource {
public:
    Resource(size_t size) : size(size), data(new int[size]) {
        std::cout << "Resource acquired: " << size << " integers allocated.\n";
    }

    ~Resource() {
        delete[] data;
        std::cout << "Resource released.\n";
    }

    Resource(const Resource& other) : size(other.size), data(new int[other.size]) {
        std::copy(other.data, other.data + other.size, data);
        std::cout << "Resource copied.\n";
    }

    Resource& operator=(const Resource& other) {
        if (this != &other) {
            delete[] data;
            size = other.size;
            data = new int[other.size];
            std::copy(other.data, other.data + other.size, data);
            std::cout << "Resource assigned.\n";
        }
        return *this;
    }

private:
    size_t size;
    int* data;
};
