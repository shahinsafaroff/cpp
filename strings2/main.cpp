#include <iostream>
#include <string>
using namespace std;

// "+" concatenating
//getline(cin, str) ----> gets full line of sentence or string from input
//str[i] ----> for indexing
//str.substr(index, length) -----> gets from index for known length of slice from word
//str.length() -----> string elements length
//str.find(s)

int main() {
    string word1, word2, word3;

    cout << "Please enter the words separated by space: " << endl;
    cin >>word1>>word2>>word3;

    if (word1 <=word2 && word1<=word3)
        cout<<word1<<endl;

    else if (word2 <=word1 && word2<=word3)
        cout<<word2<<endl;

    else
        cout<<word3<<endl;

    return 0;
}
