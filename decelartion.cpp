/**
 * @brief Calculates the sum of two integers and displays the result
 * @param A First integer operand
 * @param B Second integer operand
 */
void add_numbers(int A, int B);

int main()
{
    // Example usage with two sample values
    add_numbers(10, 25);
    return 0;
}

/**
 * @brief Implementation of number addition with result display
 * @param A First integer input
 * @param B Second integer input
 */
void add_numbers(int A, int B)
{
    // Display formatted result
    cout << "The sum of " << A << " and " << B << " is: " << A + B;
}