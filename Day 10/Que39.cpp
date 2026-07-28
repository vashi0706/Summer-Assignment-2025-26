/* Question 39: Write a program to Print number pyramid.
    1
   121
  12321
 1234321
123454321
*/

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        // Spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // Increasing numbers (1 se i tak)
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        // Decreasing numbers (i-1 se 1 tak)
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}