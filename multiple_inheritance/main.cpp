#include <iostream>
using namespace std;
class Aurum {
public:
    int usedQuantity;
public:
    void howMuchIsUsed(){
        cout<<usedQuantity<<endl;
    }
};
class Ferrum{
public:
    int usedQuantity;
public:
    void howMuchIsUsed(){
        cout<<usedQuantity<<endl;
    }
};
class Motor: public Aurum, public Ferrum {
public:
    int usedAurum;
    int usedFerrum;
};
int main() {
    Motor m1;
    m1.usedAurum = 5;
    m1.usedFerrum = 1500;
    m1.Aurum::usedQuantity = m1.usedAurum;
    m1.Ferrum::usedQuantity = m1.usedFerrum;
    cout << "How many Gold was used???" << endl;
    m1.Aurum::howMuchIsUsed();
    cout << "How many Steel was used???" << endl;
    m1.Ferrum::howMuchIsUsed();
    return 0;
}
