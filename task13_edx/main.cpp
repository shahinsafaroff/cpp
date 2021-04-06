#include <iostream>
using namespace std;
int maxabsinlst(int lst[], int size);
int lst[] = {-19, -3, 20, -1, 5, -25};

int main() {
    int size = sizeof(lst) / sizeof(lst[0]);
    cout << "Largest count in given array is " << maxabsinlst(lst, size)<<endl;
    return 0;
}
int maxabsinlst(int lst[], int size){
    int max = lst[0];
    int i;

    for (i = 1; i < size; i++) {
            if (lst [i]>0 && lst[i] > max) {
                max = lst[i];
            }else if (lst [i]<0){
                max = lst[i]*(-1);
        }
    }
    return max;
}