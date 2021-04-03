#include <iostream>

int main() {
    int count;
    int final = 1;

    std::cout << "Please enter the number for finding factorial" << std::endl;
    std::cin>> count;
    while(count>0){
        final *=count;
        count--;
    }
    std::cout<<final;
    return 0;
}
