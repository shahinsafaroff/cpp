#include <iostream>
using namespace std;
int count1;
int count2;
int count3;
int count4;

int main() {

    cout << "Please enter 4 counts, separated by a space: " << endl;
    cin >> count1;
    cin >> count2;
    cin >> count3;
    cin >> count4;
    cout << count1 << count2 << count3 << count4 << endl;

    if (count1%2==0 && count2%2==0 && count3%2==0 && count4%2==0) {
        cout<<"more evens"<<endl;
    }else if (count1%2!=0 && count2%2==0 && count3%2==0 && count4%2==0){
        cout<<"more evens"<<endl;
    }else if (count1%2!=0 && count2%2!=0 && count3%2==0 && count4%2==0){
        cout<<"same number of evens and odds"<<endl;
    } else if (count1%2!=0 && count2%2!=0 && count3%2!=0 && count4%2==0) {
        cout<<"more odds"<<endl;
    } else if (count1%2==0 && count2%2==0 && count3%2==0 && count4%2!=0) {
        cout<<"more evens"<<endl;
    } else if (count1%2==0 && count2%2==0 && count3%2!=0 && count4%2!=0) {
        cout<<"same number of evens and odds"<<endl;
    } else if (count1%2==0 && count2%2!=0 && count3%2!=0 && count4%2!=0) {
        cout << "more odds" << endl;
    } else {
        cout<<"more odds"<<endl;
    }
    return 0;
}
