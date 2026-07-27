/* Question 11: Write a program to Find GCD of two numbers. */

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int num1 = a, num2 = b;

    // Euclidean Algorithm se GCD nikal rahe hain
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    cout << "GCD of " << a << " and " << b << " = " << num1 << endl;
    return 0;
}