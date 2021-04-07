#include <iostream>
using namespace std;
int maxinlst(int lst[], int size);
int lst[] = {-19, -3, 20, -1, 5, -25};

int main() {
    int size = sizeof(lst) / sizeof(lst[0]);
    cout << "Largest count in given array is " << maxinlst(lst, size)<<endl;
    return 0;
}
int maxinlst(int lst[], int size){
    int max = lst[0];
    int i;
    for (i = 1; i < size; i++)
        if (lst[i] > max)
            max = lst[i];
    return max;
}
