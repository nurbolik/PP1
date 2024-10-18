#include <iostream>
using namespace std;
#include <cmath>
int main(){
    int a,b;
    cin >> a >> b;

    for(int i = a; i <= b; i++){
        int c = sqrt(i);
        if(c * c == i){
               cout<< i << " ";
        }
    }
    
    return 0;
}