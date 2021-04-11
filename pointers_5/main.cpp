#include <iostream>

using namespace std;

int main() {
    string teams[]= {"Galatasaray", "FanarBahce", "Beshiktash", "TrabzonSpor"};

    string *teamsAddress = teams;

    cout<<teamsAddress<<endl; //Pointered storage memory

    for(int i=0; i<4; ++i){
        cout<<*(teamsAddress+i)<<endl;//Pointered values
    }
    return 0;
}
