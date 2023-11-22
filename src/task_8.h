#include <iostream>
#include <cmath>
using namespace std;
// Function to calculate the number of digits in a positive integer
int numDigits(int n) {
    return static_cast<int>(log10(n)) + 1;
}

// Karatsuba algorithm implementation
int karatsubaMultiplication(int x, int y) {
    // Base case: if either x or y is a single-digit number, perform simple multiplication
    if (x < 10 || y < 10)
        return x * y;

    // Calculate the number of digits in x and y
    int n = max(numDigits(x), numDigits(y));

    // Calculate the midpoint to split the numbers
    int m = n / 2;

    // Split x and y into high and low parts
    int high1 = x / static_cast<int>(pow(10, m));
    int low1 = x % static_cast<int>(pow(10, m));
    int high2 = y / static_cast<int>(pow(10, m));
    int low2 = y % static_cast<int>(pow(10, m));

    // Recursive steps
    int z0 = karatsubaMultiplication(low1, low2);
    int z1 = karatsubaMultiplication((low1 + high1), (low2 + high2));
    int z2 = karatsubaMultiplication(high1, high2);

    // Combine the results
    int result = (z2 * static_cast<int>(pow(10, 2 * m))) +
                 ((z1 - z2 - z0) * static_cast<int>(pow(10, m))) + z0;

    return result;
}

int main() {
    int x, y;
    cin >> x >> y;

    int product = karatsubaMultiplication(x, y);

    cout << "Product: " << product << endl;

    return 0;
}
