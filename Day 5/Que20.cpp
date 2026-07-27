/* Question 20: Write a program to Find largest prime factor. */

#include <iostream>
using namespace std;

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;

    long long originalNum = num;
    long long maxPrime = -1;

    // 2 se divide karke extra factors hata rahe hain
    while (num % 2 == 0) {
        maxPrime = 2;
        num /= 2;
    }

    // Odd numbers se divide karke check kar rahe hain
    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            maxPrime = i;
            num /= i;
        }
    }

    // Agar end me prime number bachta hai
    if (num > 2) {
        maxPrime = num;
    }

    cout << "Largest prime factor of " << originalNum << " = " << maxPrime << endl;
    return 0;
}