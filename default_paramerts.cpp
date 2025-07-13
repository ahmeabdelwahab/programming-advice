#include <iostream>
using namespace std;

/**
 * @brief Calculates the sum of integers with default parameters
 * 
 * This function demonstrates the use of default parameters in C++.
 * When some arguments aren't provided, the default values are used.
 * 
 * @param a First integer (required)
 * @param b Second integer (required)
 * @param c Third integer (optional, defaults to 0)
 * @param d Fourth integer (optional, defaults to 0)
 * @return int Sum of all provided integers
 */
int defaultparameters(int a, int b, int c = 0, int d = 0)
{
    // Return the sum of all parameters
    // Default values will be used for any unspecified parameters
    return (a + b + c + d);
}

int main()
{
    // Demonstration of function calls with different numbers of arguments
    
    // Case 1: Only required parameters (c and d use defaults)
    cout << "Sum with 2 arguments: " << defaultparameters(10, 20) << endl;
    
    // Case 2: Three arguments (d uses default)
    cout << "Sum with 3 arguments: " << defaultparameters(30, 20, 40) << endl;
    
    // Case 3: All arguments provided
    cout << "Sum with 4 arguments: " << defaultparameters(10, 20, 50, 60) << endl;
    
    return 0;
}