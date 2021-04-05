#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "abcdbcdefg";

    cout<< str.find("de") <<endl;
    if (str.find("xyz") == string::npos)
        cout<< "Not Found" <<endl;
    else
        cout << "Found" << endl;

    cout<<str.find("cd")<<endl;
    cout<<str.find("cd", 3)<<endl; //str.find(str, index) starts to search slice within word starting from mentioned index.
    return 0;
}
