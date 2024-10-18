#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int next = n + 1;
    int previous = n - 1;

    cout << "The next number for the number" << " " << n << " " << "is" << " " << next << "." << endl;
    cout << "The previous number for the number" << " " << n << " " << "is" << " " << previous << "." << endl;

    return 0;
}