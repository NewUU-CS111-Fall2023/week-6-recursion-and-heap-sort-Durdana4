#include <iostream>
using namespace std;
bool isPrime(int n, int i) {
    // Base case: n is divisible by i, indicating it is composite
    if (n % i == 0)
        return false;
    
    // Base case: reached the end of the recursion, indicating n is prime
    if (i == 2)
        return true;

    // Recursive case: check divisibility by i-1
    return isPrime(n, i - 1);
}

bool isPrime(int n) {
    // Handle base cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // Start recursion from n-1
    return isPrime(n, n - 1);
}

int main() {
    int n;
    cin >> n;

    if (isPrime(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
