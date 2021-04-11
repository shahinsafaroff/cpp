#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char name[10] = "Shagen";
    char *nameAddress = name;
    char *nameAddress2 = &name[0];
    cout <<*nameAddress<<" "<<*nameAddress2<<endl;
    for(int i=0; i<strlen(name); i++) {
        cout<<*(nameAddress+i);
    }
    return 0;
}
