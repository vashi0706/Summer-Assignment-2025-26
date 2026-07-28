/* Question 27: Write a program to Recursive sum of digits. */

#include <iostream>
using namespace std;

// Recursion function
int sumOfDigits(int num) {
    if (num == 0) return 0;
    return (num % 10) + sumOfDigits(num / 10);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Sum of digits = " << sumOfDigits(num) << endl;
    return 0;
}