#include <iostream>
using namespace std;

bool IsDigit(unsigned char c) {
    return c >= '0' && c <= '9';
}

int main() {
    unsigned char c;
    cin >> c;
    cout << (IsDigit(c) ? "yes" : "no") << endl;
    return 0;
}