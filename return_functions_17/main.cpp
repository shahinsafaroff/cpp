#include <iostream>
using namespace std;
int x, y;
int firstCount, secondCount;
int sum (firstCount, secondCount){
    return (firstCount + firstCount);
}
int main() {
    cin>>x;
    cin>>y;
    cout << sum(x,y)<< endl;
    return 0;
}