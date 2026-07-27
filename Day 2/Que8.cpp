/* Question 8: Write a program to Check whether a number is palindrome. */

#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, lastDigit;

    cout << "Enter a number: ";
    cin >> num;

    int original = num;
    int temp = num;

    // Pehle number ko reverse kar rahe hain
    while (temp != 0) {
        lastDigit = temp % 10;
        reversed = reversed * 10 + lastDigit;
        temp /= 10;
    }

    // Agar original aur reverse barabar hain toh palindrome hai
    if (original == reversed) {
        cout << original << " is a Palindrome number." << endl;
    } else {
        cout << original << " is NOT a Palindrome number." << endl;
    }

    return 0;
}