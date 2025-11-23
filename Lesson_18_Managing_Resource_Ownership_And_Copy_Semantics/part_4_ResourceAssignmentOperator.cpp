Resource& operator=(const Resource& other) {
        if (this != &other) { // prevent self-assignment
            delete[] data; // release existing resource
            size = other.size;
            data = new int[other.size];
            std::copy(other.data, other.data + other.size, data);
            std::cout << "Resource assigned.\n";
        }
        return *this;
    }
