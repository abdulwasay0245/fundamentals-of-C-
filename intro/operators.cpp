#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 3;
    
    // Arithmetic Operators
    cout << "a + b = " << a + b << endl; 
    cout << "a / b = " << a / b << endl; 
    cout << "a % b = " << a % b << endl; 
    
    // Assignment and Increment/Decrement
    a += 5; 
    cout << "a after += 5: " << a << endl;
    
    a++; 
    cout << "a after a++: " << a << endl;

    // Relational and Logical Operators
    bool is_equal = (a == 15);
    bool is_greater = (a > b);
    cout << "a == 15? " << is_equal << endl;
    cout << "a > b? " << is_greater << endl;
    
    bool result = is_equal && is_greater; 
    cout << "Equal AND Greater? " << result << endl; 
    
    return 0;
}
