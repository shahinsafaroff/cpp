#include <iostream>
using namespace std;

class A {
public:
    int x;
};

class B {
protected: //can only be used for inheritance
    int y;

};

class C {
private:
    int z;
public:
    void setZ(int value){
        z=value;
    }
    void getZ(){
        cout<<z<<endl;
    }
};

class D:public A, public B, public C {//inheritance from other classes
    //inherited class can be changed only from descendant
public:
    D() {
        y=5;
    }
public:
    void getY(){
        cout<<y<<endl;
    }
};
int main() {
    D d1;

    d1.x = 5;

    d1.getY();

    d1.setZ(100);
    d1.getZ();
    return 0;
}
