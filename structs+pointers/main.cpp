#include <iostream>
using namespace std;
struct Student {
    int number;
    string name;
};
void changeTheName(Student *changeNeededStudentName, string newName){
    changeNeededStudentName->name = newName;//reaches the value of Student Objects element via pointer
}

int main() {
    Student memezok;
    memezok.name = "Shagen";
    changeTheName(&memezok, "Sathan");
    cout<<memezok.name<<endl;

    return 0;
}
