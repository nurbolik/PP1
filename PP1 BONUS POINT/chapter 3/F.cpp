#include <iostream>
using namespace std;
#include <string>
int main() {
    int x;
    cin >> x;
  
    string reversed = "";
    while (x > 0) { 
        int c = x % 10; 
        reversed += to_string(c);
        x /= 10;
    }

    cout << reversed << endl;
    return 0;
}