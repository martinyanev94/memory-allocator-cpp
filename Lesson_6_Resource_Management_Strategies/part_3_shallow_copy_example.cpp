int main() {
    DynamicArray array1(10);
    DynamicArray array2 = array1; // Shallow copy occurs here
    // Here, array2's destructor will delete `data`, causing array1 to have a dangling pointer

    return 0;
}
