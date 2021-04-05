#include <iostream>
using namespace std;
int avgoflst(int lst[], int n);
int lst[] = {19, 2, 20, 1, 0, 18};

int main() {
    int size = sizeof(lst) / sizeof(lst[0]);
    cout << "Largest count in given array is " << avgoflst(lst, size)<<endl;
    return 0;
}
int avgoflst(int lst[], int n){
    int sum;
    int i;
    float avg;
    for (i = 0; i < n; i++) {
        sum += lst[i];
        avg = sum/n;
    }
    return avg;
}