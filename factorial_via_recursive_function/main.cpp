#include <iostream>
using namespace std;

int nFactorial (int n){
    if (n == 1)
        return 1;
    else
        return n* nFactorial(n-1);
}
int main() {
    int x;
    cout << "Please enter the number for factorial calculation" << endl;
    cin >> x;
    cout <<x<<"! = "<<nFactorial(x);
    return 0;
}
