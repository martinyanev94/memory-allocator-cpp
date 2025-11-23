#include <iostream>
#include <memory>

class Node {
public:
    std::shared_ptr<Node> next;
    Node() { std::cout << "Node created.\n"; }
    ~Node() { std::cout << "Node destroyed.\n"; }
};

int main() {
    std::shared_ptr<Node> node1(new Node());
    std::shared_ptr<Node> node2(new Node());

    node1->next = node2;              // node1 points to node2
    node2->next = node1;              // Circular reference!

    // Break the circular dependency using weak_ptr
    std::weak_ptr<Node> weakPtr = node1->next; // weakPtr does not affect node2's reference count
    node1->next.reset();               // Now node1 can be destroyed, breaking the cycle

    std::cout << "End of the program.\n";
    return 0;
}
