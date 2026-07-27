/* Question 5: Write a program to Find sum of digits of a number. */

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, lastDigit;

    cout << "Enter a number: ";
    cin >> num;

    int temp = num;
    while (temp != 0) {
        lastDigit = temp % 10; // aakhri digit nikalo
        sum += lastDigit;      // sum me add karo
        temp /= 10;            // aakhri digit hata do
    }

    cout << "Sum of digits of " << num << " = " << sum << endl;
    return 0;
}