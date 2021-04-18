#include <iostream>
//If you wanna chnage permanent values of objects you must use pointers
// However if you wanna use object elements then ordinary values are ok!
using namespace std;
struct Student {
    int number;
    string name;
};
void changeTheName(Student *changeNeededStudentName, string newName){
    changeNeededStudentName->name = newName;//reaches the value of Student Objects element via pointer
    changeNeededStudentName->number = 788598;
}
void createStudent(Student *newStudent, int number, string name){
    newStudent->number = number;
    newStudent->name = name;
}
void showStudent(Student memezok ){
    cout<<memezok.number<<" "<<memezok.name<<endl;
}

void deleteStudent(Student *memezok){
    memezok->name = " ";
    memezok->number = 0;
}
int main() {
    Student pepezok;
    changeTheName(&pepezok,"Pepeish");
    showStudent(pepezok);
    createStudent(&pepezok, 132949, "Mandibula" );
    showStudent(pepezok);
    deleteStudent(&pepezok);
    showStudent(pepezok);
    return 0;
}