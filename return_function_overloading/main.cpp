#include <iostream>
using namespace std;

int sum(){
    cout<<"Shagen"<<endl;
}

int sum(int count1, int count2){
return count1+count2;
}

double sum(double count1, double count2){
    return count1+count2;
}

int main() {
    cout<<sum(5,6)<<endl;
    cout<<sum(5.5,6.5)<<endl;
    return 0;
}
