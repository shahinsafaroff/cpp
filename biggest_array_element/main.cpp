#include <iostream>
using namespace std;
int main() {
    int x[5], i;
    cout << "Please enter array with 5 elements \n" << endl;
    for (i=0; i<5; ++i){
        cin>>x[i];
    }
    int max;
    max=x[0];
    for (i=0; i<5; i++){
        if (x[i]>max)
            max = x[i];
    }
    cout << "Biggest of all array elements\n"<<max<< endl;
    return 0;
}
