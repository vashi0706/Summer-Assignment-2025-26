/* Question 10: Write a program to Print prime numbers in a range. */

#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter start range: ";
    cin >> start;
    cout << "Enter end range: ";
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << " are:\n";

    // Range ke har number ke liye check karenge
    for (int i = start; i <= end; i++) {
        if (i <= 1) continue;

        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}