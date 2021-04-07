#include <iostream>
using namespace std;
string str;
void  stringManipulations(string str);
int main()
{
    cout << "Enter an odd length string: "<<endl;
    getline(cin, str);
    stringManipulations(str);
    return 0;
}
void  stringManipulations(string str)
{
    int middle = str.length() / 2;
    cout << "Middle character: "<< str[middle] << endl;
    cout << "First half: "<< str.substr(0, middle) << endl;
    cout << "Second half: "<< str.substr(middle+1, str.length()) << endl;
}

