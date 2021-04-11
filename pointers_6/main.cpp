#include <iostream>
using namespace std;
void printNameElements(int *countsAddress, int length) {
    for(int i=0; i<length;++i) {
        cout<<countsAddress[i];
    }
    cout<<endl;
}
int main() {
    int counts[] = {5,10,15,20};
    printNameElements(counts,4);
    return 0;
}
