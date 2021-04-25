#include <iostream>

using namespace std;

class Human{
public:
    string name;
    string eyeColor;
};

int main() {
    Human Austrolopitecus;
    Human Neandertalus;
    Austrolopitecus.name = "Memezok";
    Austrolopitecus.eyeColor = "Brown";
    Neandertalus.name = "Pepezok";
    Neandertalus.eyeColor = "Blue";
    cout<<Austrolopitecus.name<<endl;
    cout<<Neandertalus.name<<endl;
    return 0;
}
