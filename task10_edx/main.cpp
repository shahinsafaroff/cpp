#include <iostream>
using namespace std;
int year;
bool leap;

bool isleapyear(int year);

int main() {

    cout << "Please enter year: " << endl;
    cin >> year;
    bool isleapyear( int year);
    return 0;
}
bool isleapyear (int year) {
    leap = false;
    if (year % 4 == 0) {
        leap = true;
        if (year % 100 == 0) {
            leap = false;
            if (year % 400 == 0) {
                leap = true;
           }
        }
     }
    return leap;
}