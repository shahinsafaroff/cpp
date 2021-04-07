#include <iostream>
#include <string>
using namespace std;
string s = "the quick brown fox";
string remainingwords(string s);
int main() {
    cout << remainingwords("the quick brown fox");
    return 0;
}
string remainingwords(string s){
    size_t space_pos = s.find(" ");
    if (space_pos != string::npos) {
        s = s.substr(space_pos + 1);
    }
    return s;
}
