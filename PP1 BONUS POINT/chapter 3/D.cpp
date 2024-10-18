#include <iostream>
using namespace std;

int main() {
    int x, d;
    cin >> x >> d;

    int count = 0;
 
    while (x > 0) { 
        int c = x % 10; 
        if (c == d) { 
            count++;
        }
        x /= 10;
    }

    cout << count << endl;
    return 0;
}