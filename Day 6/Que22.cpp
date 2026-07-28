/* Question 22: Write a program to Convert binary to decimal. */

#include <iostream>
using namespace std;

int main() {
    long long binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    long long temp = binary;
    int decimal = 0, base = 1;

    while (temp > 0) {
        int lastDigit = temp % 10;
        decimal += lastDigit * base; 
        base *= 2;
        temp /= 10;
    }

    cout << "Decimal of " << binary << " = " << decimal << endl;
    return 0;
}