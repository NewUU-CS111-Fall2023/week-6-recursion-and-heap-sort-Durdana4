/*
 * Author:
 * Date:
 * Name:
 */
#include <iostream>
using namespace std;
void printNumbers(int A, int B) {
    // Base case: A and B are equal
    if (A == B) {
        cout << A << endl;
        return;
    }

    // Recursive case: A < B
    if (A < B) {
        cout << A << endl;
        printNumbers(A + 1, B);
    }
    // Recursive case: A > B
    else {
        cout << A << endl;
        printNumbers(A - 1, B);
    }
}

int main() {
    int A, B;
    cin >> A >> B;

    if (A < B) {
        printNumbers(A, B);
    } else {
        printNumbers(A, B);
    }

    return 0;
}
