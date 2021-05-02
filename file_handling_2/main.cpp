#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file("C:\\Users\\shako\\Desktop\\teams.txt");

    int i, establishmentDates[4];
    string teamsName[4];
    string stadiumName[4];

    while (file){
        file>>establishmentDates[i]>>teamsName[i]>>stadiumName[i];
        i++;
    }

    for(int i=0; i<3; i++){
        cout <<"Establishment Date: "<<establishmentDates[i]<<" ";
        cout <<"Team Name: "<<teamsName[i]<<" ";
        cout <<"Stadium Name : "<<stadiumName[i]<<endl;
    }

    return 0;
}