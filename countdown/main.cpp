#include <iostream>

int main() {

    int count;
    int sum=0;

    std::cout << "Please enter the count for CountDown " << std::endl;
    std::cin>>count;

    while(count>0){
        std::cout<< count <<std::endl;
        sum+=count;
        count--;
    }

    std::cout<<"All entered numbers until 1 summary: "<<sum<<std::endl;
    return 0;
}
