#include <iostream>
using namespace std;

void changeValues(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int count1, count2, temp;
    cout << "Please enter counts one by one" << endl;
    cin >>count1>>count2;
    cout <<count1<<count2<<endl;
    changeValues(&count1, &count2);
    cout <<count1<<count2<<endl;
    return 0;
}
