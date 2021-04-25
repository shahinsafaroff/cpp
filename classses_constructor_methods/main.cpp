#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int number;
//ENCAPSULATION
public:
    Student(string enteredName, int enteredNumber){ // CONSTRUCTOR METHOD
        name = enteredName;
        number = enteredNumber;
    }
    Student(string enteredName){ //CONSTRUCTOR METHOD OVERLOADING
        name = enteredName;
        number = 0;
    }
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
    void showStudentInfo() {
        cout<<"Name : "<<name<<endl;
        cout<<"Number : "<<number<<endl;
    }
    string getName(){
        return name;
    }
    int getNumber(){
        return number;
    }
};
int main() {
    Student student1 ("Shahin Safarov", 132949);
    Student student2 ("Memezok");
    cout<<student1.getNumber()<< " " <<student1.getName()<<endl;
    student1.setName("Shagen");
    student1.showStudentInfo();
    student2.showStudentInfo();

    return 0;
}
