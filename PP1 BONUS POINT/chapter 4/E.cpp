#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int CountWords(const string& line) {
    stringstream ss(line);
    string word;
    int count = 0;
    
    while (ss >> word) { 
        count++;
    }
    
    return count;
}

int main() {
    string line;
    getline(cin, line); 
    cout << CountWords(line) << endl; 
    return 0;
}