#include <iostream>

using namespace std;

int main() {
    int v, t;
    cin >> v >> t;

    int distance = v * t;

    int final_position = (distance % 109 + 109) % 109;

    cout << final_position << endl;

    return 0;
}