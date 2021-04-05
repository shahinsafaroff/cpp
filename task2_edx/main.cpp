#include <iostream>
int dollars;
int cents;
int quarter = 25;
int dime = 10;
int nickel = 5;
int penny = 1;
int quartersQuantity;
int dimesQuantity;
int nickelsQuantity;
int penniesQuanity;
int money;

using namespace std;

int main() {
    cout << "Please enter the amount of money to convert: " << endl;
    cout << "Please enter the amount of dollars: " << endl;
    cin >> dollars;
    cout << "Please enter the amount of cents: " << endl;
    cin >> cents;
    cout << "# of dollars "<< dollars << endl;
    cout << "# of cents "<< cents << endl;
    dollars = 100*cents;
    money = dollars + cents;
    quartersQuantity = money / quarter;
    nickelsQuantity = money % quarter / nickel;
    dimesQuantity = money % quarter % nickel / dime;
    penniesQuanity = money % quarter % nickel % dime / penny;
    cout << "There are "<<quartersQuantity<< " quarters, "<<nickelsQuantity<<" nickels, "<< dimesQuantity<<" dimes,"<<penniesQuanity<<" pennies."<<endl;
    return 0;
}
