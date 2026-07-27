/* Question 15: Write a program to Check Armstrong number. */

#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0, digits = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    // Digits count kar rahe hain
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Power calculate karke add kar rahe hain
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }
        
        result += power;
        temp /= 10;
    }

    if (result == originalNum)
        cout << originalNum << " is an Armstrong number." << endl;
    else
        cout << originalNum << " is NOT an Armstrong number." << endl;

    return 0;
}