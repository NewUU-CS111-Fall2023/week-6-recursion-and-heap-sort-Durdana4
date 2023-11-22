#include <iostream>
using namespace std;
void findSecondLargest(int num, int& largest, int& secondLargest) {
    // Base case: num is 0, end of sequence
    if (num == 0)
        return;

    // Update largest and secondLargest based on num
    if (num > largest) {
        secondLargest = largest;
        largest = num;
    } else if (num > secondLargest && num < largest) {
        secondLargest = num;
    }

    // Recursive case: continue reading the sequence
    cin >> num;
    findSecondLargest(num, largest, secondLargest);
}

int main() {
    int num;
    cin >> num;

    int largest = num;
    cin >> num;

    int secondLargest = num;
    findSecondLargest(num, largest, secondLargest);

    cout << "Second Largest: " << secondLargest << endl;

    return 0;
}
