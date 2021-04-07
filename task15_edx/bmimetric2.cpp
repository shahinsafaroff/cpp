#include <iostream>
#include <string>
using namespace std;

float bmimetricf(float weight, float height);

int main() {
    float height, weight, bmi;
    cout << "Please enter your Weight in kilograms: " << endl;
    cin >> weight;
    cout << "Please enter your Height in meters: " << endl;
    cin >> height;
    bmi = bmimetricf( weight, height);
    if (bmi < 18.5){
        cout<<"Underweight"<<endl;
    } else if (18.5<=bmi && bmi<=24.9) {
        cout<<"Normal"<<endl;
    }else if (25<=bmi && bmi<=29.9) {
        cout<<"Overweight"<<endl;
    } else if (bmi>=30) {
        cout<<"Obese"<<endl;
    }
    return 0;
}
float bmimetricf(float weight, float height) {
    float formula;
    formula = weight / (height*height);
    return formula;
}

