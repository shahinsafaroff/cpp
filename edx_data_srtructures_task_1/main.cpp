
#include <iostream>

using namespace std;

void addOne(int *ptrNum){
    int num;
    cin>>num;

    *ptrNum = *ptrNum +1;
    cout << "Value of variable after the function: " << *ptrNum << endl;
}


