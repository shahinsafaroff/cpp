#include <iostream>
using namespace std;
int i;
void printCountElements(int counts[], int length);
int main() {
    int counts[3] ={2, 4, 6};
    int counts2[4] ={1, 3, 5, 10};
    int counts3[5] ={3, 5, 7, 9, 11};
    printCountElements(counts, 3);
    cout<<endl;
    printCountElements(counts2, 4);
    cout<<endl;
    printCountElements(counts3, 5);
    cout<<endl;
    return 0;
}
void printCountElements(int counts[], int length){
    for (i=0; i<length; i++){
        cout << counts[i] <<" ";
    }
}