#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string permuteString(const string& s) {
    string t = s;
    vector<pair<int, char>> vowelIndices;

    // Find vowel indices and their corresponding characters in s
    for (int i = 0; i < s.length(); i++) {
        char c = tolower(s[i]);
        if (c == 'a'  c == 'e'  c == 'i'  c == 'o'  c == 'u')
            vowelIndices.push_back(make_pair(i, s[i]));
    }

    // Sort the vowel indices based on the ASCII values of the corresponding characters
    sort(vowelIndices.begin(), vowelIndices.end(),
              [](const pair<int, char>& a, const pair<int, char>& b) {
                  return tolower(a.second) < tolower(b.second);
              });

    // Reconstruct the resulting string t by placing the sorted vowels back into their original positions
    for (const auto& pair : vowelIndices)
        t[pair.first] = pair.second;

    return t;
}

int main(){
    string s;
    cin >> s;

    string t = permuteString(s);
    cout << "Resulting String: " << t << endl;

    return 0;
}
