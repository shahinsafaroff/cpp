#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int *array = new int[x];
    cout << *array << endl; //dynamic array at runtime
    delete [] array;
    return 0;
}
