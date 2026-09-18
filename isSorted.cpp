#include <iostream>
#include <cassert>

using namespace std;

bool isSorted(const int* arr, const int size) {
    // --- EDGE CASE HANDLING ADDED ---
    if (size <= 1) {
        return true;
    }
    
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    
    return true;
}

void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);
}

void testUnsortedArray() {
    int arr[] = {1, 4, 3, 5, 6};
    assert(isSorted(arr, 5) == false);
}

void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};
    assert(isSorted(arr, 5) == true);
}

void testSingleElement() {
    int arr[] = {42};
    assert(isSorted(arr, 1) == true);
}

void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);
}

void testNegativeValues() {
    int arr[] = {-10, -5, 0, 2, 8};
    assert(isSorted(arr, 5) == true);
}

void testAllSameValues() {
    int arr[] = {7, 7, 7, 7};
    assert(isSorted(arr, 4) == true);
}

void testEmptyArray() {
    int arr[] = {}; 
    assert(isSorted(arr, 0) == true);
}

int main() {
    cout << "Running TDD test cases..." << endl;
    
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testAllSameValues();
    testEmptyArray();
    
    cout << "All test cases passed successfully!" << endl;
    return 0;
}