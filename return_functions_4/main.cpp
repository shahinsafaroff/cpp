#include <iostream>
using namespace std;
int x, y;
int sum (int firstCount, int secondCount);

int main() {
    cout << "Please enter the numbers to sum"<< endl;
    cin>>x>>y;
    cout << sum(x,y) << endl;
        if(sum(x,y)==11){
            cout << "True"<< endl;
        }
    return 0;
}
int sum (int firstCount, int secondCount){
    return (firstCount + secondCount);
}
