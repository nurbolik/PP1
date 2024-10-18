#include <iostream>
#include <string>
using namespace std;

bool Compare(string S1, string S2) {
    return S1 == S2;
}

int main() {
    string S1, S2;
    cin >> S1;
    cin >> S2;
    cout << (Compare(S1, S2) ? "yes" : "no") << endl;
    return 0;
}