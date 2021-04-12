#include <iostream>
using namespace std;
int main() {
    int x[5], i;
    cout << "Please enter array with 5 elements \n" << endl;
    for (i=0; i<5; ++i){
        cin>>x[i];
    }
    int sum;
    sum=0;
    for (i=0; i<5; i++)
        sum += x[i];
    cout << "Summary of all array elements\n"<<sum << endl;
    return 0;
}
