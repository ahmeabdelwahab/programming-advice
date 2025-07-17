#include <iostream>
#include <vector>
using namespace std;

void readMore(vector<int>& vNumbers) {  // Pass by reference to modify the original vector
    char readMoreChoice;  // Renamed for clarity, but not initialized yet—will handle in loop
    int number;  // Variable to store each input number
    
    // Start the loop assuming the user wants to add numbers
    char choice = 'Y';  // Initialize to 'Y' to enter the loop at least once, or handle input first
    while (choice == 'Y' || choice == 'y') {  // Case-insensitive check for 'Y' or 'y'
        cout << "Enter your number: ";
        cin >> number;
        vNumbers.push_back(number);  // Add the number to the vector
        
        cout << "Do you want to add more numbers? (Y/N): ";
        cin >> choice;  // Read the choice for the next iteration
    }
}

void printNumbers(const vector<int>& vNumbers) {  // Use const reference for read-only access
    cout << "Your numbers are: ";
    for (auto num : vNumbers) {  // Ranged-based for loop for simplicity
        cout << num << " ";  // Print each number with a space
    }
    cout << endl;
}

int main() {
    vector<int> vNumbers;  // Declare an empty vector
    readMore(vNumbers);    // Call the function to read numbers
    printNumbers(vNumbers);  // Call the function to print numbers
    return 0;  // Indicate successful execution
}
