#include <memory>
#include <iostream>

void weakPointerExample() {
    std::shared_ptr<int> sharedPtr(new int(40));
    std::weak_ptr<int> weakPtr = sharedPtr; // weakPtr does not count towards the ownership

    std::cout << "Use count before scope: " << sharedPtr.use_count() << std::endl;

    // Now we're going to create a new scope
    {
        std::shared_ptr<int> sharedPtr2 = weakPtr.lock(); // Attempt to acquire a shared_ptr from weak_ptr
        if (sharedPtr2) {
            std::cout << "Value: " << *sharedPtr2 << std::endl;
        }
    } // sharedPtr2 goes out of scope, leaving only sharedPtr

    std::cout << "Use count after scope: " << sharedPtr.use_count() << std::endl; // still 1
}
