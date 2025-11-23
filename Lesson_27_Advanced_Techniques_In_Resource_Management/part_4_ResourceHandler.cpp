#include <iostream>
#include <memory>

class ResourceHandler {
private:
    std::unique_ptr<Buffer> buffer;

public:
    ResourceHandler(size_t size) : buffer(std::make_unique<Buffer>(size)) {
        std::cout << "ResourceHandler created.\n";
    }

    // Destructor - handled by unique_ptr automatically
    ~ResourceHandler() = default;

    // Copy Constructor - deleted
    ResourceHandler(const ResourceHandler&) = delete;

    // Move Constructor
    ResourceHandler(ResourceHandler&& other) noexcept : buffer(std::move(other.buffer)) {
        std::cout << "ResourceHandler moved.\n";
    }

    // Copy Assignment Operator - deleted
    ResourceHandler& operator=(const ResourceHandler&) = delete;

    // Move Assignment Operator
    ResourceHandler& operator=(ResourceHandler&& other) noexcept {
        if (this != &other) {
            buffer = std::move(other.buffer);
            std::cout << "ResourceHandler moved and assigned.\n";
        }
        return *this;
    }

    Buffer* getBuffer() {
        return buffer.get();
    }
};
