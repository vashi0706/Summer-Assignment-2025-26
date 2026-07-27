/* Question 6: Write a program to Reverse a number. */

#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, lastDigit;

    cout << "Enter a number: ";
    cin >> num;

    int temp = num;
    while (temp != 0) {
        lastDigit = temp % 10;
        reversed = reversed * 10 + lastDigit; // reverse number bana rahe hain
        temp /= 10;
    }

    cout << "Reversed number = " << reversed << endl;
    return 0;
}