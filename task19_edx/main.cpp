#include <iostream>
#include <string>
using namespace std;
string s = "the quick brown fox";
string firstword(string s);
int main() {
    cout << firstword(s);
    return 0;
}
string firstword(string s){
    size_t space_pos = s.find(" ");
    if (space_pos != string::npos) {
        s = s.substr(0,space_pos);
    }
    return s;
}



// "+" concatenating
//getline(cin, str) ----> gets full line of sentence or string from input
//str[i] ----> for indexing
//str.substr(index, length) -----> gets from index for known length of slice from word
//str.length() -----> string elements length
//str.find(s)
