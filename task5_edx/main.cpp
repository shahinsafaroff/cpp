#include <iostream>
using namespace std;
int score1;
int score2;

int main() {

    cout << "Please enter 2 grades, separated by a space: " << endl;
    cin >> score1;
    cin >> score2;

    if (score1<60 && score2<60) {
        cout<<"Student Failed:("<<endl;
    }else if (score1>=95 && score2>=95){
        cout<<"Student Graduated with Honors:)"<<endl;
    }else {
        cout<<"Student Graduated!"<<endl;
    }

    return 0;
}
