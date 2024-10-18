#include <iostream>
#include <unordered_map>
using namespace std;

char FindDuplicateLetter(const string& str) {
    unordered_map<char, int> letterCount;
    for (char c : str) {
        letterCount[c]++;
        if (letterCount[c] == 2) {
            return c;
        }
    }
    return '\0';
}

int main() {
    string line;
    cin >> line;
    cout << FindDuplicateLetter(line) << endl;
    return 0;
}