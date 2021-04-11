#include <iostream>

using namespace std;

int main() {
    int *pointer;
    int x = 100;
    pointer = &x;
    cout << *pointer <<endl;
    *pointer = 20;
    cout << *pointer <<endl;
    x=40;
    cout << x << endl;
    cout <<*pointer<<endl;
    return 0;
}
