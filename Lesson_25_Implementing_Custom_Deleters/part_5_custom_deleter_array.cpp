int main() {
    auto deleter = [](int* ptr) {
        std::cout << "Deleting array: ";
        delete[] ptr;
    };

    CustomDeleterArray arr(5, deleter);
}
