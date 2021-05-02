#include <iostream>
using namespace std;
class Book {
public:
    string name;
public:
    void printDetails(){
        cout<<name<<endl;
    }
};
class Roman: public Book {
public:
    string romanType;
public:
    Roman(string name, string romanType){
        this->name = name;
        this->romanType = romanType;
    }
    void printDetails(){
        cout<<"Roman name: "<<name<<" Roman type: "<<romanType<<endl;
    }
};
int main() {
    Roman r1("War and Peace", "Long");
    r1.printDetails();
    Book *r1Main;//getting Book object pointer
    r1Main = &r1;//overriding r1 sub-object values with Main object details
    r1Main->printDetails();
    return 0;
}
