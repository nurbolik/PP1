#include <iostream>
using namespace std;

unsigned char ToggleCase(unsigned char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A'); 
    } else if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A'); 
    }
    return c; 
}

int main() {
    unsigned char c;
    cin >> c;
    cout << ToggleCase(c) << endl;
    return 0;
}