/**
 * @file string_formatting.cpp
 * @brief Demonstrates basic string formatting techniques in C++
 * 
 * Shows:
 * - C-style string handling
 * - printf() formatting
 * - Reusable function approach
 * 
 * Part of my C++ learning journey - Ahmed Abdelwahab
 */

#include <iostream>
#include <cstdio>
using namespace std;

// Function prototypes
void printWelcomeMessage(const char* name, const char* welcome);
void printSpacedCharacter(char character, int spacing);

int main() {
    // Constants for better maintainability
    const char STUDENT_NAME[] = "Ahmed Abdelwahab";
    const char WELCOME_MSG[] = "Welcome to the School of Computer Science";
    const char DEMO_CHAR = 'C'; // Using 'C' for "Computer Science"
    
    // Demonstration of formatting
    printWelcomeMessage(STUDENT_NAME, WELCOME_MSG);
    
    // Showing different spacing examples
    printSpacedCharacter(DEMO_CHAR, 1);   // Minimal spacing
    printSpacedCharacter(DEMO_CHAR, 5);   // Medium spacing
    printSpacedCharacter(DEMO_CHAR, 10);  // Significant spacing
    
    return 0;
}

/**
 * @brief Prints a personalized welcome message
 * @param name The name to include in the greeting
 * @param welcome The welcome message text
 */
void printWelcomeMessage(const char* name, const char* welcome) {
    printf("Dear %s, %s\n", name, welcome);
}

/**
 * @brief Prints a character with specified spacing
 * @param character The character to display
 * @param spacing The number of spaces before the character
 */
void printSpacedCharacter(char character, int spacing) {
    printf("Formatted output: %*c (with %d spaces padding)\n", 
           spacing, character, spacing);
}