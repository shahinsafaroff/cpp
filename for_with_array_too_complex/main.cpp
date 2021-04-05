#include <iostream>

using namespace std;
const int MAX_CLASS_SIZE = 60;

int main() {
    int numberOfStudents;
    int gradesList[MAX_CLASS_SIZE];
    int currentGrade;
    int index, sum;
    float average;
    cout << "Please enter the number of students in the class" << endl;

    cin>>numberOfStudents;

    //reading the grades
    for (index =0; index <numberOfStudents; index++){
        cin>>currentGrade;
        gradesList[index] = currentGrade;
    }
    //calculating the average
    sum = 0;

    for (index = 0; index <numberOfStudents; index++){
        sum += gradesList[index];
    }

    average = (float)sum /(float)numberOfStudents;
    cout<<"The Class average is "<<average<<endl;
    //print grades above the average
    cout<<"Grades above the average are: "<<;
    for(index = 0; index <numberOfStudents; index++){
        if(gradesList[index] > average){
            cout<<gradesList[index]<<" ";
        }
    }
    cout<<endl;
    return 0;
}
