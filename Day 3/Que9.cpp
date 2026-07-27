/* Question 9: Write a program to Check whether a number is prime. */

#include <iostream>
using namespace std;

int main() {
    int num;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        isPrime = false;
    } else {
        // Agar kisi aur number se divide ho gaya toh prime nahi hai
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << num << " is a Prime number." << endl;
    } else {
        cout << num << " is NOT a Prime number." << endl;
    }

    return 0;
}