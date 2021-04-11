#include <iostream>

using namespace std;

int main() {
    int count = 55;
    int &reference = count;
    reference++;
    cout << count << endl;
    return 0;
}
