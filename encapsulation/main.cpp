#include <iostream>
using namespace std;
class employee {
private:
    string name ="null";//encapsulated part
    float salary;
public:
    string getName(){ //manipulation part
        return name;
    }
    void setName(string name) {//manipulation part
        this->name = name;
    }
};
int main() {
    employee e1;//manipulation part
    e1.setName("Memezok");//manipulation part
    cout << e1.getName()<< endl;
    return 0;
}
