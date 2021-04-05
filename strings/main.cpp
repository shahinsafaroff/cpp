#include <iostream>
#include <string>
using namespace std;


int main() {
    string userName;
    int index;
    cout << "Please enter your name: " << endl;
    getline(cin, userName);

    for (index = userName.length()-1; index >=0; index--){
        cout<<userName[index];
    }
    cout<<endl;
    // "+" concatenating
    //getline(cin, str) ----> gets full line of sentence or string from input
    //str[i] ----> for indexing
    //str.substr(index, length) -----> gets from index for known length of slice from word
    //str.length() -----> string elements length
    //str.find(s)
    return 0;
}
