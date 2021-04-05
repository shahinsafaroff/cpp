#include <iostream>
using namespace std;
int n1 =1, n2=1, n, nextCount;
int main() {
    cout << "Enter a positive number: ";
    cin >> n;

    nextCount = n1 + n2;

    cout << "Fibonacci Series: " << n1 << ", " << n2 << ", ";

    while(nextCount<= n) {
        cout << nextCount << ", ";
        n1 = n2;
        n2 = nextCount;
        nextCount = n1 + n2;

    }

    return 0;
}