#include <iostream>
using namespace std;
float firstItem, secondItem,basePrice, sum, clubDiscounted, taxRate, afterTax;
string clubCard;

int main() {
    cout << "Enter price of the first item: " << endl;
    cin >> firstItem;
    cout << "Enter price of the second item: " << endl;
    cin >> secondItem;
    if (firstItem > secondItem) {
        sum = firstItem + secondItem / 2;
    } else if (firstItem < secondItem) {
        sum = firstItem / 2 + secondItem;
    }
    cout << "Does customer have a club card? (Y/N): " << endl;
    cin >> clubCard;
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: " << endl;
    cin >> taxRate;
    if (clubCard =="yes" || clubCard == "Y" || clubCard =="y") {
        clubDiscounted = sum - sum / 10;
    } else if (clubCard == "no" || clubCard == "N" || clubCard == "n") {
        clubDiscounted = sum;
    }
    cout << "Price after discounts = "<< clubDiscounted << endl;
    afterTax = clubDiscounted + clubDiscounted * taxRate / 100;
    basePrice = firstItem + secondItem;
    cout << "Base price = " << basePrice << endl;
    cout << "Total price = " << afterTax << endl;
    return 0;
}
