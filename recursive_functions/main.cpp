#include <iostream>
using namespace std;

void func (int x){
    cout<<"Function was called x = "<<x<<endl;
    func(x+1);
}

int main() {
    func(0);
    return 0;
}
