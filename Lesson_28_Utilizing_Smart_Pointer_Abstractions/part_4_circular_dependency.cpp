#include <iostream>
#include <memory>

class Node {
public:
    int value;
    std::shared_ptr<Node> next;
    Node(int val) : value(val) {}
};

void createCircularDependency() {
    std::shared_ptr<Node> node1 = std::make_shared<Node>(1);
    std::weak_ptr<Node> weak_node = node1; // Create a weak pointer from a shared pointer
    {
        std::shared_ptr<Node> node2 = std::make_shared<Node>(2);
        node1->next = node2; // Link node1 to node2
        node2->next = weak_node.lock(); // Use weak_ptr to link back
    } // node2 goes out of scope, but node1 is still valid due to weak_ptr

    std::cout << "Node 1 value: " << node1->value << std::endl; 
}

int main() {
    createCircularDependency();
    return 0;
}
