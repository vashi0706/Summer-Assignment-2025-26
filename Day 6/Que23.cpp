/* Question 23: Write a program to Count set bits in a number. */

#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout << "Enter a number: ";
    cin >> num;

    int temp = num;
    while (temp > 0) {
        if (temp & 1) {
            count++;
        }
        temp = temp >> 1; 
    }

    cout << "Number of set bits (1s) in " << num << " = " << count << endl;
    return 0;
}