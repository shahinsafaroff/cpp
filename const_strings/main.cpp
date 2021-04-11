#include <iostream>
using namespace std;
void printStringArray(const string *stringAddress) {
    const string *tempAddress = stringAddress;

    for(; stringAddress != (tempAddress+5);stringAddress++)
        cout<<*stringAddress<<endl;
}

int main() {
    string array[] = {"Shagen", "Academy", "Place of", "Winners"};
    printStringArray(array);
    return 0;
}
