#include <iostream>

using namespace std;

void changeCounts(int &x, int &y){
    int temp;
    temp = x;
    x=y;
    y= temp;
}

int main() {
    int count1 = 55;
    int count2 = 65;
    cout<<count1<<count2<<endl;
    changeCounts(count1, count2);
    cout<<count1<<count2<<endl;
    return 0;
}
