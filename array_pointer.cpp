    /**
     * @file array_pointer_demo.cpp
     * @brief Demonstrates array-pointer relationship in C++
     * @author [AHMED ABDELWAHAB]
     * @date 2024-7-10
     */

    #include <iostream>
    using namespace std;

    int main() {
        // Initialize an array
        const int ARRAY_SIZE = 3;
        int array[ARRAY_SIZE] = {10, 30, 40};
        
        // Pointer declaration and assignment
        int *ptr = array;  // Equivalent to &array[0]

        // Output memory address of array and first element's value
        cout << "Array base address: " << array << endl;
        cout << "First element via pointer: " << *ptr << endl;

        // Demonstrate pointer arithmetic (with bounds checking)
        cout << "\nElement at ptr + 2: ";
        if (ptr + 2 < array + ARRAY_SIZE) {
            cout << *(ptr + 2);  // Valid access (40)
        } else {
            cerr << "Out of bounds!";
        }

        // Intentional out-of-bounds access for educational purposes
        cout << "\n\n[Educational Demo] Accessing ptr + 3 (out of bounds): ";
        cout << *(ptr + 3) << " (undefined behavior)";

        return 0;
    }