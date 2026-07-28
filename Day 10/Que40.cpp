/* Question 40: Write a program to Print character pyramid.
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
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
        // Increasing characters
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch;
            ch++;
        }
        // Decreasing characters
        ch -= 2;
        for (int j = 1; j < i; j++) {
            cout << ch;
            ch--;
        }
        cout << endl;
    }

    return 0;
}