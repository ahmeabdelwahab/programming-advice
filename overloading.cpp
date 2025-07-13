#include <iostream>
using namespace std;

/**
 * @brief Calculates the sum of two integers
 * @param A First integer operand
 * @param B Second integer operand
 * @return Sum of A and B
 */
int Mysum(int A, int B)
{
    return (A + B);
}

/**
 * @brief Calculates the sum of three integers
 * @param A First integer operand
 * @param B Second integer operand
 * @param C Third integer operand
 * @return Sum of A, B and C
 */
int Mysum(int A, int B, int C) 
{
    return (A + B + C);
}

/**
 * @brief Calculates the sum of two double-precision numbers
 * @param A First double operand
 * @param B Second double operand
 * @return Sum of A and B
 */
double Mysum(double A, double B)
{
    return (A + B);
}

int main()
{
    // Test cases demonstrating function overloading
    cout << "Sum of two integers: " << Mysum(10, 30) << endl;
    cout << "Sum of three integers: " << Mysum(10, 30, 40) << endl;
    cout << "Sum of two doubles: " << Mysum(10.5, 30.2) << endl;
    
    return 0;
}