#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double P, r, A;
    int n, t;

    // Input values
    cout << "Enter principal amount (P): ";
    cin >> P;
    cout << "Enter annual interest rate (r in decimal, e.g. 0.05 for 5%): ";
    cin >> r;
    cout << "Enter number of times interest applied per year (n): ";
    cin >> n;
    cout << "Enter number of years (t): ";
    cin >> t;

    // Compound Interest formula
    A = P * pow(1 + r/n, n*t);

    // Output result
    cout << "Final amount after compound interest (A): " << A << endl;

    return 0;
}