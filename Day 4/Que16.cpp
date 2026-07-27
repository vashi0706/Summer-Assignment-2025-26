/* Question 16: Write a program to Print Armstrong numbers in a range. */

#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter start range: ";
    cin >> start;
    cout << "Enter end range: ";
    cin >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are:\n";

    for (int num = start; num <= end; num++) {
        int digits = 0, temp = num;

        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;
        int result = 0;
        while (temp != 0) {
            int remainder = temp % 10;
            int power = 1;
            for (int i = 0; i < digits; i++) {
                power *= remainder;
            }
            result += power;
            temp /= 10;
        }

        if (result == num) {
            cout << num << " ";
        }
    }
    cout << endl;

    return 0;
}