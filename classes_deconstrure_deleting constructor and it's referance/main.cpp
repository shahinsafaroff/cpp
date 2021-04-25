#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int number;
//ENCAPSULATION
public:
    Student(string name, int number){
        this->name = name; //this method points to the Student private: class name
        this->number = number;//this method points to the Student private: class number
    }
    Student(string name){//OVERLOADING STUDENT CONSTRUCTOR
        this->name = name;
        this->number = 0;
    }
    void setName(string name){
        if(name.size() >= 3){
            this->name = name;
        }else {
            cout<<"Please enter the valid Student Name!!!"<<endl;
        }
    }
    ~Student(){
        cout<<"Object is deleted"<<endl;
    }
    void setNumber(int number){
        if (number>0){
            this->number = number;
        }else {
            cout<<"Please enter the Valid Number"<<endl;
        }
    }
    void showStudentInfo() {
        cout<<"Name : "<<this->name<<endl;
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
    Student *student1 = new Student("Shagen", 132949);
    student1->showStudentInfo();
    delete student1;
    return 0;
}
