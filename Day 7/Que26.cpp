/* Question 26: Write a program to Recursive Fibonacci. */

#include <iostream>
using namespace std;

// Recursion function
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter nth term: ";
    cin >> n;

    cout << n << "th Fibonacci term = " << fibonacci(n) << endl;
    return 0;
}