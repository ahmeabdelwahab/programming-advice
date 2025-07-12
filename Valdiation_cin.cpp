#include <iostream>
using namespace std ;


int readInt(const string& prompt, int min, int max) {
    int value;
    while (true) {
        cout << prompt;
        if (!(cin >> value) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cerr << "Invalid input. Enter an integer.\n";
        } 
        else if (value < min || value > max) {
            cerr << "Value must be between " << min << " and " << max << ".\n";
        }
        else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clean any trailing junk
            return value;
        }
    }
}

int main()
{
    cout <<"Your Number is " <<readint;
}