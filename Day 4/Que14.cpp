/* Question 14: Write a program to Find nth Fibonacci term. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input!" << endl;
        return 0;
    }

    int first = 0, second = 1, nthTerm = 0;

    if (n == 1) nthTerm = 0;
    else if (n == 2) nthTerm = 1;
    else {
        for (int i = 3; i <= n; i++) {
            nthTerm = first + second;
            first = second;
            second = nthTerm;
        }
    }

    cout << n << "th Fibonacci term = " << nthTerm << endl;
    return 0;
}