/* Question 7: Write a program to Find product of digits. */

#include <iostream>
using namespace std;

int main() {
    int num, product = 1, lastDigit;

    cout << "Enter a number: ";
    cin >> num;

    int temp = num;
    if (temp == 0) {
        product = 0;
    } else {
        while (temp != 0) {
            lastDigit = temp % 10;
            product *= lastDigit; // sabhi digits ko multiply kar rahe hain
            temp /= 10;
        }
    }

    cout << "Product of digits of " << num << " = " << product << endl;
    return 0;
}