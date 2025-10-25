#include <iostream>
#include <string> // Need this header for 'string'
using namespace std;

int main() {
    int score = 85;
    char grade;
    int day_of_week = 3; 

    // ----------------- If-Else If-Else -----------------
    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >= 70) {
        grade = 'C';
    } else {
        grade = 'F';
    }
    cout << "Your score is " << score << ", which is a grade: " << grade << endl;

    // ----------------- Ternary Operator -----------------
    string status = (score >= 60) ? "Passed" : "Failed";
    cout << "You " << status << "." << endl;

    // ----------------- Switch Statement -----------------
    switch (day_of_week) {
        case 1: case 2: case 3: case 4: case 5:
            cout << "It's a weekday." << endl;
            break;
        case 6: case 7:
            cout << "It's the weekend!" << endl;
            break;
        default:
            cout << "Invalid day number." << endl;
    }
    
    return 0;
}
