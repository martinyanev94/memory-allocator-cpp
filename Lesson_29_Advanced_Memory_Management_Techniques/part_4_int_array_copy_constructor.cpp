int main() {
    IntArray arr1(5); 
    arr1.print(); // Should print 0s

    IntArray arr2(arr1); // Calls the copy constructor
    arr2.print(); // Should print 0s as well

    arr1 = IntArray(3); // Calls the copy assignment operator
    arr1.print(); // Should print 0s

    return 0;
}
