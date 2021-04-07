#include <iostream>
using namespace std;

float bmimetricf(float weight, float height);

int main() {
    float height, weight, bmi;
    cout << "Please enter your Weight in kilograms: " << endl;
    cin >> weight;
    cout << "Please enter your Height in meters: " << endl;
    cin >> height;
    bmi = bmimetricf( weight, height);
    cout <<bmi<< endl;
    return 0;
}
float bmimetricf(float weight, float height) {
    float formula;
    formula = weight / (height*height);
    return formula;
}