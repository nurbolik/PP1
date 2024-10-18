#include <iostream>

using namespace std;

int main() {
    int rook_row, rook_col, piece_row, piece_col;

    cin >> rook_row >> rook_col >> piece_row >> piece_col;

    if (rook_row == piece_row || rook_col == piece_col) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}