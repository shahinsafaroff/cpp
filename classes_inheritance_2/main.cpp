#include <iostream>
using namespace std;

class team {
public:
    string name;
    int establishedYear;
    void print(){
        cout << "Team class" <<endl;
    }
};
class footballer:public team { //instance
private:
    string name = "No Name was defined...";
public:
    int yearBorn;
    float salary;
public:
    string getName() { //prints Name
        return name;
    }
    void setName(string name) { //sets the Name
        this->name = name;
    }
};
int main() {
    footballer f1; //create f1
    team *f1team;
    f1team = &f1;
    f1.setName("Kahn");
    f1team->name = "Galatasaray";
    f1.yearBorn = 1986;
    f1.salary = 12746;
    cout <<f1team->name<<f1.getName()<<f1.yearBorn<<f1.salary<< endl;
    f1team->print();
    return 0;
}
