#include <iostream>
using namespace std;

int main() {
    const int size = 20;

    // Dynamically allocate memory on the heap
    int *salArray = new int[size];

    // Input salaries using pointer notation
    for (int i = 0; i < size; i++) {
        cout << "Enter Salary for employee " << (i + 1) << ": ";
        cin >> *(salArray + i);
    }

    // Apply increment formula
    for (int i = 0; i < size; i++) {
        *(salArray + i) = *(salArray + i) + *(salArray + i) / (i + 1);
    }

    // Display updated salaries
    cout << "\nUpdated Salaries: ";
    for (int i = 0; i < size; i++) {
        cout << *(salArray + i) << " ";
    }
    cout << endl;

    // Free dynamically allocated array memory
    delete[] salArray;
    salArray = nullptr;

    return 0;
}