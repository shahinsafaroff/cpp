#include <iostream>
using namespace std;

int main() {
    string name = "Shagen";
    cout <<name<<endl;
    string *nameAddress = &name;
    cout <<nameAddress<<endl;//pointered storage
    cout <<*nameAddress<<endl;//pointered value
    return 0;
}
