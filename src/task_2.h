#include <iostream>
using namespace std;
bool isPowerOfTwo(int N) {
    // Base cases: N is 1 or less than 1
    if (N == 1)
        return true;
    else if (N <= 0)
        return false;

    // Recursive case: Check if N is divisible by 2 and recursively check N/2
    return (N % 2 == 0) && isPowerOfTwo(N / 2);
}

int main() {
    int N;
    cin >> N;

    if (isPowerOfTwo(N))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
