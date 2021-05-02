#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file("C:\\Users\\shako\\Desktop\\students.txt");

    int count;
    while (file>>count){
        cout << count << endl;
    } //count gets a value from integers hold in students.txt

    return 0;
}