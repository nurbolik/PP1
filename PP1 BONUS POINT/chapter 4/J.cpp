#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 0, y = 0;
    string direction;
    int steps;

    while (cin >> direction >> steps) {
        if (direction == "North") y += steps;
        else if (direction == "South") y -= steps;
        else if (direction == "East") x += steps;
        else if (direction == "West") x -= steps;
    }

    cout << x << " " << y << endl;
    return 0;
}