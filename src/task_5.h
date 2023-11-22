#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(const string& word, int start, int end) {
    // Base case: start and end indices meet or cross each other, indicating a palindrome
    if (start >= end)
        return true;

    // Recursive case: compare characters at start and end indices, and check the substring in between
    if (word[start] == word[end])
        return isPalindrome(word, start + 1, end - 1);
    else
        return false;
}

bool isPalindrome(const string& word) {
    int start = 0;
    int end = word.length() - 1;
    return isPalindrome(word, start, end);
}

int main() {
    string word;
    cin >> word;

    if (isPalindrome(word))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
