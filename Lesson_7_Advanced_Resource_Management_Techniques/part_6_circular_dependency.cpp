#include <iostream>
#include <memory>

class CircularDependency {
public:
    std::shared_ptr<CircularDependency> other;
    CircularDependency() {
        std::cout << "CircularDependency Created!" << std::endl;
    }
    ~CircularDependency() {
        std::cout << "CircularDependency Destroyed!" << std::endl;
    }
};

void circular_example() {
    std::shared_ptr<CircularDependency> first = std::make_shared<CircularDependency>();
    std::shared_ptr<CircularDependency> second = std::make_shared<CircularDependency>();

    first->other = second; 
    second->other = first; // This will create a cycle causing a memory leak if both are shared_ptrs.

    // To break the cycle, we would use weak_ptr instead.
    // first->other = std::weak_ptr<CircularDependency>(second); 
}
