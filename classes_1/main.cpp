#include <iostream>

class rectangular {
public:
    void sides(int, int);
    int area(void);
private:
    int width;
    int length;
};
void rectangular::sides(int x, int y) {
    length = x;
    width = y;
}
int rectangular::area(void){

    return length*width;
}
int main() {
    rectangular rectangular1, rectangular2;
    rectangular1.sides(5,7);
    rectangular2.sides(12,78);
    std::cout << "First Rectangular area: " << rectangular1.area() << std::endl;
    std::cout << "Second Rectangular area: " << rectangular2.area() << std::endl;
    return 0;
}
