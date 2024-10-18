#include <iostream>

using namespace std;

int main() {
    int bishop_row, bishop_col, piece_row, piece_col;

    cin >> bishop_row >> bishop_col >> piece_row >> piece_col;

    if (abs(bishop_row - piece_row) == abs(bishop_col - piece_col)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}