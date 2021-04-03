#include <iostream>
#include <string>

int main() {
    int n;
    int counter;
    std::cout << "Please enter the Positive Integer" << std::endl;
    std::cin>>n;
    counter = 1;

    while(counter<=100){
        std::cout<<counter<<std::endl;
        counter++;
    }
    return 0;
}
