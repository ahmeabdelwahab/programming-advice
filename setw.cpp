/**
 * @file formatted_table.cpp
 * @brief Demonstrates formatted table output using iomanip
 * @details Shows basic usage of setw() for column alignment
 * Part of my C++ learning journey - revisiting in 1 week
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    // Configure table formatting constants
    const int NAME_WIDTH = 20;
    const int AGE_WIDTH = 5;
    const int NUMBER_WIDTH = 12;
    
    // Print table header
    cout << left  // Left-align all columns
         << setw(NAME_WIDTH) << "Name" 
         << setw(AGE_WIDTH) << "Age" 
         << setw(NUMBER_WIDTH) << "Number" << endl;
    
    // Print table data
    cout << setw(NAME_WIDTH) << "Ahmed abdelwahab" 
         << setw(AGE_WIDTH) << "10" 
         << setw(NUMBER_WIDTH) << "01119201172" << endl;
    
    return 0;
}