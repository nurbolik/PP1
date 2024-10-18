#include <iostream> 
using namespace std;


int main(){
    int n;
    cin >> n;
    
    int last_n = n % 10;
    int result = (n - last_n) / 10;
    cout << result << endl;

    return 0;
}