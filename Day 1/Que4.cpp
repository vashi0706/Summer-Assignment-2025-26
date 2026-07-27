/* Question 4: Write a program to Count digits in a number. */

#include <iostream>
using namespace std;

int main() {
    long long num;
    int count = 0;

    cout << "Enter a number: ";
    cin >> num;

    long long temp = num;

    if (temp == 0) {
        count = 1;
    } else {
        // Ek-ek karke last digit hatayenge aur count badhayenge
        while (temp != 0) {
            temp /= 10;
            count++;
        }
    }

    cout << "Total digits in " << num << " = " << count << endl;
    return 0;
}