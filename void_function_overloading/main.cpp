#include <iostream>
using namespace std;

void sayName(){
    cout<<"Shagen"<<endl;
}

void sayName(string name){
    cout<<name<<endl;
}

void sayName(string name1, string name2){
    cout<<name1<<name2<<endl;
}

int main() {
    sayName();
    sayName("Academy");
    sayName("Shagen ", "Safarov");
    return 0;
}
