/* Question 3: Write a program to Find factorial of a number. */

#include <iostream>
using namespace std;

int main() {
    int num;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Negative number ka factorial nahi hota!" << endl;
    } else {
        // 1 se lekar num tak multiply kar rahe hain
        for(int i = 1; i <= num; i++) {
            factorial *= i;
        }
        cout << "Factorial of " << num << " = " << factorial << endl;
    }

    return 0;
}