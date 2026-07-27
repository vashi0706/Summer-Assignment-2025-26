/* Question 1: Write a program to Calculate sum of first N natural numbers. */

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    
    cout << "Enter a number N: ";
    cin >> n;

    // 1 se lekar n tak sabhi numbers ko jod rahe hain
    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}