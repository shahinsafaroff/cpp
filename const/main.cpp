#include <iostream>
//changing constant values via pointer relocation
//constant values can't be changed however their pointers values can be changed
using namespace std;
void printMiddleElements(const int *x, const int *y){
    for(;x!=y; x++){
        cout<<*x<<endl;
    }
}

int main() {
    int counts[] = {1, 2, 3, 4, 5, 6};
    printMiddleElements(counts+1, counts+5);
    return 0;
}
