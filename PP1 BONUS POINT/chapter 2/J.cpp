#include <iostream>

using namespace std;

int main() {
    int start_col, start_row, end_col, end_row;

    cin >> start_col >> start_row >> end_col >> end_row;

    if (abs(start_col - end_col) <= 1 && abs(start_row - end_row) <= 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}