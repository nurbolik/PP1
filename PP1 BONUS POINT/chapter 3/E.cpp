#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    int count = 0;
 
    while (x > 0) { 
        int c = x % 10; 
        count += c;
        x /= 10;
    }

    cout << count << endl;
    return 0;
}