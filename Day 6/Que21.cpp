/* Question 21: Write a program to Convert decimal to binary. */

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    if (num == 0) {
        cout << "Binary: 0" << endl;
        return 0;
    }

    int binary[32];
    int i = 0;

    int temp = num;
    while (temp > 0) {
        binary[i] = temp % 2; 
        temp /= 2;
        i++;
    }

    cout << "Binary of " << num << " = ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
    cout << endl;

    return 0;
}