#include <iostream>
using namespace std;

// Part 1: Function to analyze the pointer
void analyze_pointer(int *ptr) {
    if (ptr != nullptr) {
        // Print the memory address stored in the pointer
        cout << "Memory location: " << ptr << endl;
        // Dereference the pointer to print the actual value
        cout << "Value pointed to: " << *ptr << endl;
    }
}

int main() {
    // Part 2, Task 1: Allocate an int on the stack
    int stackValue = 42; 
    
    cout << "--- Stack Allocation ---" << endl;
    // Pass the memory location using the address-of operator (&)
    analyze_pointer(&stackValue); 

    // Part 2, Task 2: Allocate an int on the heap
    int *heapValue = new int(100); 
    
    cout << "\n--- Heap Allocation ---" << endl;
    // The pointer itself holds the memory address, so pass it directly
    analyze_pointer(heapValue); 

    // Always free dynamically allocated heap memory
    delete heapValue;
    heapValue = nullptr; 

    return 0;
}