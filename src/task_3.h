#include <iostream>
using namespace std;
int digitSum(int N) {
    // Base case: N is a single digit
    if (N < 10)
        return N;

    // Recursive case: Calculate the sum of the last digit and the sum of the remaining digits
    return N % 10 + digitSum(N / 10);
}

int main() {
    int N;
    cin >> N;

    int sum = digitSum(N);
    cout << "Sum of digits: " << sum << endl;

    return 0;
}
