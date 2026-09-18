#include <iostream>
#include <cstring> // For strlen()

using namespace std;

int main() {
    int capacity;

    // 1. Determine the size needed for dynamic allocation
    cout << "Enter the maximum length of your string: ";
    cin >> capacity;
    
    // Clear the newline character left in the input buffer by cin >> capacity
    cin.ignore(); 

    // 2. Dynamically allocate memory for the string (+1 for the null terminator '\0')
    char *str = new char[capacity + 1];

    // 3. Take input from the user
    cout << "Enter a string: ";
    cin.getline(str, capacity + 1);

    // 4. Reverse the string using a two-pointer approach
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swap characters
        char temp = *(str + start);
        *(str + start) = *(str + end);
        *(str + end) = temp;
        
        start++;
        end--;
    }

    // 5. Display the reversed result
    cout << "Reversed string: " << str << endl;

    // 6. Free the dynamically allocated memory
    delete[] str;
    
    // Good practice: set pointer to nullptr after deletion
    str = nullptr; 

    return 0;
}