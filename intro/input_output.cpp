#include <iostream>
#include <string> // Need this header for 'string'
using namespace std;

int main() {
    string name; // Used 'string' directly
    int year;

    // Input using cin
    cout << "Enter your name: ";
    cin >> name; 

    cout << "Enter the current year: ";
    cin >> year;

    // Output using cout and endl
    cout << "\n--- Output ---\n";
    cout << "Hello, " << name << "! ";
    cout << "It is currently year " << year << "." << endl;
    
    return 0;
}
