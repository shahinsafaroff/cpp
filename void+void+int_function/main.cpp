#include <iostream>
using namespace std;

void max (int *x){
    int i, k;
    k = x[0];
    for (i=1; i<5; ++i){
      if (x[i]>k)
          k =x[i];
    }
    cout<<"The biggest element in array: "<<k<<endl;
}

void enterArrayNumber (int *x){
    int i;
    cout<<"Enter Array elements \n";
    for (i=0; i<5; ++i){
        cin>>x[i];
    }
}

int main() {
    int x[5];
    enterArrayNumber(x);
    max(x);
    return 0;
}
