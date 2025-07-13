#include <iostream>
using namespace std;

/**
 * @brief Prints a name message (leaf function in call stack)
 * 
 * This is the deepest nested function in our call hierarchy.
 * When called, it adds a stack frame but doesn't call further functions.
 */
void function4()
{
    cout << "My Name is Ahmed";  // Execution reaches here last
}

/**
 * @brief Calls function4 (middle layer in call stack)
 * 
 * Adds its own stack frame, then immediately calls function4.
 * The call stack grows deeper at this point.
 */
void function3()
{
    function4();  // Nested call #3
}

/**
 * @brief Calls function3 (middle layer in call stack)
 * 
 * Continues the call chain. Each call adds a new frame 
 * to the runtime stack in memory.
 */
void function2()
{
    function3();  // Nested call #2
}

/**
 * @brief Calls function2 (entry point to nested calls)
 * 
 * Starts the chain of function calls that will
 * eventually reach function4().
 */
void function1()
{
    function2();  // Nested call #1
}

/**
 * @brief Main program entry point
 * 
 * Demonstrates a simple call stack:
 * 1. Outputs "Hello World" 
 * 2. Initiates the nested function calls
 * 
 * Call stack order when function1() is called:
 * main() → function1() → function2() → function3() → function4()
 */
int main()
{
    cout << "Hello world" << endl;  // First executed line
    function1();  // Starts the call chain
    
    return 0;
}