int main() {
    DynamicArray array1(10);
    DynamicArray array2 = array1; // Calls the copy constructor

    DynamicArray array3(5);
    array3 = array1; // Calls the copy assignment operator

    return 0;
}
