#include <iostream>
using namespace std;
int year;

int main() {

    cout << "Please enter year: " << endl;
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                cout << year << " was a leap year.";
            else
                cout << year << " was not a leap year.";
        }
        else
            cout << year << " was a leap year.";
    }
    else
        cout << year << " was not a leap year.";

    return 0;
}