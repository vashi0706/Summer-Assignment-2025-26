/* Question 13: Write a program to Generate Fibonacci series. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    int first = 0, second = 1, next;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
    cout << endl;

    return 0;
}