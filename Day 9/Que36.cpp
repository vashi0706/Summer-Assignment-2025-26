/* Question 36: Write a program to Print hollow square pattern.
*****
*   *
*   *
*   *
*****
*/

#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter side size of square: ";
    cin >> size;

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            // Boundary rows aur columns par star print hoga, baki jagah space
            if (i == 1 || i == size || j == 1 || j == size) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}