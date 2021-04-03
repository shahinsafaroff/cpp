#include <iostream>

int main() {

    int count;
    int oddCountSum = 0;
    int evenCountSum = 0;

    std::cout << "Please enter the Count" << std::endl;
    std::cin>>count;

    do{
        if(count % 2 == 0){
            evenCountSum+=count;
        }else if (count % 2 != 0){
            oddCountSum+=count;
        }
        count--;
    }while(count>0);
    std::cout << "Odd counts summ: "<<oddCountSum<<std::endl;
    std::cout << "Even counts summ: "<<evenCountSum<<std::endl;
    return 0;
}
