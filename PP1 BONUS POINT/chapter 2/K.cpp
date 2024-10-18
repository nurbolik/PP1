#include <iostream>

using namespace std;

int main() {
    int knight_row, knight_col, piece_row, piece_col;

    cin >> knight_row >> knight_col >> piece_row >> piece_col;

    if ((abs(knight_row - piece_row) == 2 && abs(knight_col - piece_col) == 1) ||
        (abs(knight_row - piece_row) == 1 && abs(knight_col - piece_col) == 2)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}