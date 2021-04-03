#include <iostream>

using namespace std;

int main() {
    int userInput, absValue;
    cout<<"Please enter an integer value"<<endl;
    cin>>userInput;

    if (userInput<0) {
        absValue = userInput *(-1);
    } else if (userInput>=0) {
        absValue = userInput;
    }
    cout<<"Absolute Value is: "<<absValue<<endl;
    return 0;
}
