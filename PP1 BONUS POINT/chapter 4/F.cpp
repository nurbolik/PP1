#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string input, word, longestWord;
    int maxLength = 0;

  
    getline(cin, input);

   
    stringstream ss(input);

  
    while (ss >> word) {

        if (word.length() > maxLength) {
            maxLength = word.length();
            longestWord = word;
        }
    }

    cout << longestWord << endl;
    cout << maxLength << endl;

    return 0;
}
