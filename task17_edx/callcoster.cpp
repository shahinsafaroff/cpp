#include<iostream>
#include<string>
using namespace std;
int main () {
    int minutes, startTime;
    string day;
    float cost, rate;
    cout << "Enter the day the call started at: ";
    cin >> day;
    if(day == "Mon"||day == "Tue" || day =="Wed"|| day =="Thu"|| day == "Fri") {
        cout << "Enter the time the call started at (hhmm): ";
        cin >> startTime;
        if (startTime < 0 || startTime >= 2400) {
            cout << "Invalid time."<<endl;
            cout << "Enter start time of the call(For example, 1:30 = 1330): ";
        }
        else if (startTime >= 800 && startTime <= 1800) {
            rate = 0.4;
            cout << "Enter the duration of the call (in minutes): ";
            cin >> minutes;
            if (minutes < 0) {
                cout << "Invalid time."<<endl;
                cout << "The number of minutes must be input as a positive integer";
                cin >> minutes;
            }
            cost = float(minutes) * rate;
            cout << "This call will cost $" << cost << endl;
        }
        else if (startTime < 800 || startTime > 1800){
            rate = 0.25;
            cout << "Enter the duration of the call (in minutes): ";
            cin >> minutes;
            if (minutes < 0) {
                cout << "Invalid time."<<endl;
                cout << "The number of minutes must be input as a positive integer";
                cin >> minutes;
            }
            cost = float(minutes) * rate;
            cout << "This call will cost $" << cost << endl;
        }
    }
    else if(day =="Sat" || day =="Sun"){
        rate = 0.15;
        cout << "Enter the duration of the call (in minutes): ";
        cin >> minutes;
        if (minutes < 0) {
            cout << "Invalid time."<<endl;
            cout << "The number of minutes must be input as a positive integer";
            cin >> minutes;
        }
        cost = float(minutes) * rate;
        cout << "This call will cost $" << cost << endl;
    }
    else {
        cout << "Invalid."<<endl;
    }
    return 0;
}