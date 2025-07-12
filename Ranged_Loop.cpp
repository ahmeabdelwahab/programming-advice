#include <iostream>
#include <string>  // Need to include string header
using namespace std;

int main() {
    // Strings must be in quotes
    string kind_of_fruit[] = {"apple", "mango", "banana"};
    
    // Variable name should match (kind_of_fruit, not n)
    for (string name : kind_of_fruit) 
    {
        cout << name << endl;
    }

    return 0;
}