#include <iostream>
using namespace std;

int n, i;

int main() {

    cout << "Please enter a positive integer:" << endl;
    cin >> n;
    i = 2;
    while (i % 2 == 0) {
        cout << i << endl;
        i += 2;

        if ((i - 2) / 2 == n) {
        break;
        }
    }
    return 0;
}
