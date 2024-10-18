#include <iostream>
#include <string>
using namespace std;

bool IsSubstring(const string& str1, const string& str2) {
    return str2.find(str1) != string::npos;
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    cout << (IsSubstring(str1, str2) ? "yes" : "no") << endl;
    return 0;
}