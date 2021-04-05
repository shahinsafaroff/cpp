#include <iostream>

const int quarter = 25;
const int dime = 10;
const int nickel = 5;
const int penny = 1;
int quartersQuantity;
int dimesQuantity;
int nickelsQuantity;
int penniesQuanity;
int sum, dollars,cents;

using namespace std;

int main() {
   cout << "Please enter the number of coins! " << endl;
   cout << "Please enter the number of quarters: " << endl;
   cin >> quartersQuantity;
   cout << "# of quarters "<<quartersQuantity<<endl;
   cout << "Please enter the number of dimes: " << endl;
   cin >>dimesQuantity;
   cout << "# of dimes "<<dimesQuantity<<endl;
   cout << "Please enter the number of nickels: " << endl;
   cin >>nickelsQuantity;
   cout << "# of nickels "<<nickelsQuantity<<endl;
   cout << "Please enter the number of pennies: " << endl;
   cin >>penniesQuanity;
   cout << "# of pennies "<<penniesQuanity<<endl;
   sum = quartersQuantity * quarter + dimesQuantity * dime +nickelsQuantity * nickel + penniesQuanity * penny;
   dollars = sum/100;
   cents = sum%100;
   cout << "There are "<<dollars<<" dollars and "<<cents<<" cents."<<endl;
    return 0;
}
