#include <iostream>
#include <string>
using namespace std;

bool IsPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string line;
    cin >> line;
    cout << (IsPalindrome(line) ? "yes" : "no") << endl;
    return 0;
}