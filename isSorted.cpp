#include <iostream>
#include <cassert>

using namespace std;

bool isSorted(const int* arr, const int size) {
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

// --- NEW EDGE CASE TESTS ADDED ---
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
    
    // Run new tests
    testAllSameValues();
    testEmptyArray();
    
    cout << "Edge case tests complete!" << endl;
    return 0;
}