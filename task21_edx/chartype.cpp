#include <iostream>

using namespace std;

void check(char ch);

int main() {
    char ch;
    cin>>ch;
    check(ch);
    return 0;
}
void check(char ch){
    if (ch >= 'A' && ch <= 'Z')
        cout<< ch << " is an UpperCase character"<<endl;
    else if (ch >= 'a' && ch <= 'z')
        cout<< ch << " is a lower case letter"<<endl;
    else if (ch >= '0' && ch <= '9')
        cout<< ch << " is a digit"<<endl;
    else
        cout<< ch << " a non-alphanumeric character"<<endl;
}
