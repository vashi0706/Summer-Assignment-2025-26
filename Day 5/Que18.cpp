/* Question 18: Write a program to Check strong number. */

#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    // Har digit ka factorial nikal kar add kar rahe hain
    while (num > 0) {
        remainder = num % 10;

        int fact = 1;
        for (int i = 1; i <= remainder; i++) {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    if (sum == originalNum)
        cout << originalNum << " is a Strong number." << endl;
    else
        cout << originalNum << " is NOT a Strong number." << endl;

    return 0;
}