#include <iostream>

int main() {
    int num, sumDigits, countDigits, currDigit;

    std::cout << "Please enter a positive integer:" << std::endl;
    std::cin >> num;
    sumDigits = 0;
    countDigits = 0;

    while(num>0) {
        currDigit = num%10;
        countDigits++;
        sumDigits+=currDigit;
        num = num/10;
        }
    std::cout<<num<<" has "<<countDigits<<"Digits";
    std::cout<<"and their sum is"<<sumDigits<<std::endl;

    return 0;
}
