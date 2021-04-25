#include <iostream>

using namespace std;

int main() {
    int *address = new int;
    *address = 10;
    cout << *address << endl;
    delete address; //deletes the value
    address = nullptr;  // or address = 0; //deletes the reference
    *address = 12;

    cout << *address << endl;
    return 0;
}
