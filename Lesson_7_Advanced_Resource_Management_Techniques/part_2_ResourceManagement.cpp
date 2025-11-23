class Resource {
private:
    int* items;
    size_t capacity;

public:
    Resource(size_t cap) : capacity(cap), items(new int[cap]) {}

    ~Resource() {
        delete[] items;
    }

    Resource(const Resource& other) : capacity(other.capacity), items(new int[other.capacity]) {
        std::copy(other.items, other.items + other.capacity, items);
    }
    
    Resource& operator=(const Resource& other) {
        if (this != &other) {
            delete[] items;

            capacity = other.capacity;
            items = new int[capacity];
            std::copy(other.items, other.items + capacity, items);
        }
        return *this;
    }

    Resource(Resource&& other) noexcept : items(other.items), capacity(other.capacity) {
        other.items = nullptr;
        other.capacity = 0;
    }

    Resource& operator=(Resource&& other) noexcept {
        if (this != &other) {
            delete[] items;

            items = other.items;
            capacity = other.capacity;
            other.items = nullptr;
            other.capacity = 0;
        }
        return *this;
    }
};
