#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int minutes, startTime;
    string day;
    float cost, rate;
    cout << "Enter the day the call started at: ";
    cin >> day;
    cin >> startTime;
    cin >> minutes;
    if (minutes < 0 || startTime < 0 || startTime >= 2400) {
        cout << "Invalid time." << endl;
        cout << "The number of minutes must be input as a positive integer";
        cout << "Enter start time of the call(For example, 1:30 = 1330): ";
    }
    else if(day == "Mon"||day == "Tue" || day =="Wed"|| day =="Thu"|| day == "Fri") {
        if (startTime >= 800 && startTime <= 1800) {
            rate = 0.4;
            cost = float(minutes) * rate;
            cout <<"This call will cost $" <<fixed<< setprecision(2)<< cost << endl;
        }
        else if (startTime < 800 || startTime > 1800){
            rate = 0.25;
            cost = float(minutes) * rate;
            cout << "This call will cost $" <<fixed<< setprecision(2)<< cost << endl;
        }
    }
    else if(day =="Sat" || day =="Sun"){
        rate = 0.15;
        cost = float(minutes) * rate;
        cout <<"This call will cost $" <<fixed<< setprecision(2)<< cost << endl;
    }
    else {
        cout << "Invalid."<<endl;
    }
    return 0;
}
