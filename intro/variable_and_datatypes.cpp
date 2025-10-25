#include <iostream>
using namespace std;

int main() {
    int age = 30;
    float price = 19.99f;
    double pi = 3.1415926535;
    char initial = 'A';
    bool is_learning = true;
    const int MAX_USERS = 100;

    cout << "Age: " << age << endl;
    cout << "Price: $" << price << endl;
    cout << "Initial: " << initial << endl;
    cout << "Learning: " << is_learning << " (1=true, 0=false)" << endl;
    cout << "Max Users: " << MAX_USERS << endl;

    // Example of explicit type casting
    int casted_pi = (int)pi; 
    cout << "Casted Pi: " << casted_pi << endl;
    
    return 0;
}
