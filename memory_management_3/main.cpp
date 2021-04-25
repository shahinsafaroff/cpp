#include <iostream>
using  namespace std;
int main() {
    int length = 3;
    int *address = new int[length];// new keyword creates space for new however empty array
    *address = 10;
    *(address+1) = 20;
    *(address+2) = 30;
    for(int i=0; i<3;i++){
        cout << *(address + i) << endl;
    }
    delete [] address;
    address = nullptr;
    for(int i=0; i<3;i++){
        cout << *(address + i) << endl;
    }
    return 0;
}
