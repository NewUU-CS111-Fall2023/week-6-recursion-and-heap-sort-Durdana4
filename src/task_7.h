#include <iostream>
using namespace std;
int reverseNumber(int n, int reversed) {
    // Base case: n becomes 0, indicating the end of the number
    if (n == 0)
        return reversed;

    // Recursive case: reverse the digits by multiplying reversed by 10 and adding the last digit of n
    int lastDigit = n % 10;
    reversed = reversed * 10 + lastDigit;

    // Recursive call: remove the last digit of n by integer division
    return reverseNumber(n / 10, reversed);
}

int reverseDigits(int n) {
    return reverseNumber(n, 0);
}

int main() {
    int n;
    cin >> n;

    int reversed = reverseDigits(n);
    cout << "Reversed Number: " << reversed << endl;

    return 0;
}
