#include <iostream>
using namespace std;

int main() {
    int salary, monInTax = 0, annSalary, annInTax = 0, remainSalary, remainAnSalary;
    double inTax = 0;
    cout << "Enter your salary";
    cin >> salary;
    annSalary = salary * 12;

    if (annSalary < 600000) {
        inTax = 0;
    }
    else if (annSalary >= 600000 && annSalary <= 1000000) {
        inTax = 0.1;
    }
    else if (annSalary > 1000000 && annSalary <= 1500000) {
        inTax = 0.125;
    }
    else if (annSalary > 1500000) {
        inTax = 0.15;
    }

    if (inTax != 0) {
        annInTax = annSalary * inTax;
        monInTax = salary * inTax;
        remainAnSalary = annSalary - annInTax;
        remainSalary = salary - monInTax;
    }
    else {
        annInTax = 0;
        monInTax =  0;
        remainAnSalary = annSalary;
        remainSalary = salary;
    }

    cout << "Your annual salary is: " << annSalary
         << "\nYour annual income tax is: " << annInTax
         << "\nYour monthly income tax is: " << monInTax
         << "\nAfter deducting " << (inTax * 100) << "% of tax"
         << "\nYour remaining monthly salary is: " << remainSalary
         << "\nYour remaining annual salary is: " << remainAnSalary;
}
