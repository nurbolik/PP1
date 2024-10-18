#include <iostream>

using namespace std;

int main() {
    int queen_row, queen_col, piece_row, piece_col;

    cin >> queen_row >> queen_col >> piece_row >> piece_col;


    if (queen_row == piece_row || queen_col == piece_col || 
        abs(queen_row - piece_row) == abs(queen_col - piece_col)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}