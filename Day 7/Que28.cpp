/* Question 28: Write a program to Recursive reverse number. */

#include <iostream>
using namespace std;

// Helper recursive function
int reverseNum(int num, int reversed = 0) {
    if (num == 0) return reversed;
    return reverseNum(num / 10, reversed * 10 + (num % 10));
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Reversed number = " << reverseNum(num) << endl;
    return 0;
}