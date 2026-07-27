/* Question 12: Write a program to Find LCM of two numbers. */

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int num1 = a, num2 = b;

    // Pehle GCD nikal rahe hain
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    int gcd = num1;
    // Formula: LCM = (a * b) / GCD
    int lcm = (a * b) / gcd;

    cout << "LCM of " << a << " and " << b << " = " << lcm << endl;
    return 0;
}