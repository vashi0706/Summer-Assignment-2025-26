/* Question 25: Write a program to Recursive factorial. */

#include <iostream>
using namespace std;

// Recursion function
long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Negative numbers ka factorial nahi hota!" << endl;
    } else {
        cout << "Factorial of " << num << " = " << factorial(num) << endl;
    }

    return 0;
}