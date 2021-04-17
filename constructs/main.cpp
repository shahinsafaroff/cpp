#include <iostream>

class rectangular {
public:
    rectangular();
    rectangular(int x, int y);
    void sides(int, int);
    int area(void);
private:
    int width;
    int length;
};

rectangular::rectangular() {
    width = 10;
    length = 12;
}

rectangular::rectangular(int x, int y) {
    length = x;
    width = y;

void rectangular::sides(int x, int y) {
    length = x;
    width = y;
}
int rectangular::area(void){

    return length*width;
}
int main() {
    rectangular rectangular1, rectangular2(5,8);

    std::cout << "First Rectangular area: " << rectangular1.area() << std::endl;
    std::cout << "Second Rectangular area: " << rectangular2.area() << std::endl;
    return 0;
}
