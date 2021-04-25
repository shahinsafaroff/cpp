#include <iostream>
using namespace std;

class Human{
public:
    string name;
    int age;
    void sayNameAndAge(){
        cout<<name<<" "<<age<<endl;
    }
};
int main() {
    Human bachelor, master;
    bachelor.name = "Shahin";
    bachelor.age = 34;
    master.name = "Pepezok";
    master.age = 35;
    bachelor.sayNameAndAge();
    master.sayNameAndAge();
    return 0;
}