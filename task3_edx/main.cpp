#include <iostream>
using namespace std;
float height;
float weight;
float formula;

int main() {
    cout << "Please enter your Weight in kilograms: " << endl;
    cin >> weight;
    cout << "Please enter your Height in kilograms: " << endl;
    cin >> height;
    formula  = weight / (height*height);
    cout << "BMI is : "<< formula << endl;
    return 0;
}
