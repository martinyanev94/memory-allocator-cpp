#include <iostream>
#include <memory>

class Resource {
public:
    Resource() {
        resource = std::make_unique<int>(42); // Dynamic allocation
    }

    Resource(Resource&& other) noexcept : resource(std::move(other.resource)) {
        std::cout << "Resource moved!" << std::endl;
    }

    void showResource() const {
        std::cout << "Resource value: " << *resource << std::endl;
    }

private:
    std::unique_ptr<int> resource;
};

int main() {
    Resource res1;
    res1.showResource();
    
    Resource res2(std::move(res1)); // Move res1 to res2
    res2.showResource();

    return 0;
}
