#include <iostream>
#include <math.h>
using namespace std;
const float pound = 0.453592;
const float inch = 0.0254;
float heightInInches;
float weightInKgs;
float heightInMeters;
float weightInPounds;
float formula;

int main() {
    cout << "Please enter your Weight in pounds: " << endl;
    cin >> weightInPounds;
    cout << "Please enter your Height in inches: " << endl;
    cin >> heightInInches;
    heightInMeters = heightInInches * inch;
    weightInKgs = weightInPounds * pound;
    formula  = weightInKgs / (heightInMeters*heightInMeters);
    cout << "BMI is : "<< round(formula) << endl;
    return 0;
}
