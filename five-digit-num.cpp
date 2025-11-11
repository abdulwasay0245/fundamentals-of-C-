#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a five-digit number: ";
    cin >> num;

    if (num < 10000 || num > 99999) {
        cout << "This is not a five-digit number." << endl;
        return 0;
    }

    int temp = num;
    int sum = 0;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    if (sum % 3 == 0)
        cout << num << " is divisible by 3." << endl;
    else
        cout << num << " is NOT divisible by 3." << endl;

    return 0;
}
