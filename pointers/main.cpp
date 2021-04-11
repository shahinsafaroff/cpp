#include <iostream>

using namespace std;

int main() {
    int count =10;

    int *countAddress = &count; //pointer address

    cout << countAddress << endl;
    cout << *countAddress << endl; //pointered memory storage actual value

    return 0;
}
