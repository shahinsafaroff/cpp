#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int number;
//ENCAPSULATION
public:
    void setName(string enteredName){
        if(enteredName.size() >= 3){
            name = enteredName;
        }else {
            cout<<"Please enter the valid Student Name!!!"<<endl;
        }
    }
    void setNumber(int enteredNumber){
        if (enteredNumber>0){
            number = enteredNumber;
        }else {
            cout<<"Please enter the Valid Number"<<endl;
        }
    }
    string getName(){
        return name;
    }
    int getNumber(){
        return number;
    }
};
int main() {
    Student* student1 = new Student();
    student1->setName("Shagen");
    student1->setNumber(132949);
    cout<<student1->getNumber()<<" "<<student1->getName()<<endl;
    return 0;
}