int main() {
    Resource res1(5); // Allocate a resource for 5 integers
    Resource res2 = res1; // Copy constructor called
    Resource res3(10);
    res3 = res1; // Copy assignment operator called
    return 0;
}
