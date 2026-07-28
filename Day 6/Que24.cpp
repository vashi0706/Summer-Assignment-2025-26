/* Question 24: Write a program to Find x^n without pow(). */

#include <iostream>
using namespace std;

int main() {
    double x;
    int n;

    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter power (n): ";
    cin >> n;

    double result = 1.0;
    int p = (n < 0) ? -n : n;

    for (int i = 1; i <= p; i++) {
        result *= x;
    }

    if (n < 0) {
        result = 1.0 / result;
    }

    cout << x << "^" << n << " = " << result << endl;
    return 0;
}