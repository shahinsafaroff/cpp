#include <iostream>
using namespace std;

struct Student {
    int number;
    string name;
    string surname;
    string department;
    char sex;
};

int main() {
    Student memezok = {788598, "Shagen", "Safaroff", "Software Engineering", 'M'};
    cout << memezok.name<< endl;
    cout << memezok.surname<< endl;
    cout << memezok.number<< endl;
    cout << memezok.department<< endl;
    cout << memezok.sex<< endl;
    return 0;
}
