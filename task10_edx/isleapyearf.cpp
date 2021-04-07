#include <iostream>
using namespace std;
int year;

bool isleapyear(int inyear);

int main()
{
    cin>>year;

    isleapyear(year) ? cout << "Leap Year":
    cout << "Not a Leap Year";
    return 0;
}

bool isleapyear(int inyear)
{
    if (inyear % 400 == 0)
        return true;

    if (inyear % 100 == 0)
        return false;

    if (inyear % 4 == 0)
        return true;
   return false;
}