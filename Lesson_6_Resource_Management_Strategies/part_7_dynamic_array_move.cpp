int main() {
    DynamicArray array1(10);
    DynamicArray array2 = std::move(array1); // Use move constructor

    DynamicArray array3(5);
    array3 = std::move(array2); // Use move assignment operator

    return 0;
}
