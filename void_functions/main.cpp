#include <iostream>
using namespace std;

int main() {
    int counts[3] ={2, 4, 6};
    int counts2[4] ={1, 3, 5, 10};
    int counts3[5] ={3, 5, 7, 9, 11};
    int i;
    for (i=0; i<3; i++){
        cout << counts[i] <<" ";
    }
    cout<<endl;

    for (i=0; i<4; i++){
        cout << counts2[i] <<" ";
    }
    cout<<endl;
    for (i=0; i<5; i++){
        cout << counts3[i] <<" ";
    }
    cout<<endl;

    return 0;
}
