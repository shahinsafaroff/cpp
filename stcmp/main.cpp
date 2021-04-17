#include <iostream>
#include <string.h>

int main() {
    char s1[100], s2[100];
    std::cout << "Please enter the string\n" << std::endl;
    std::cin>>s1;
    std::cout << "Please enter the string\n" << std::endl;
    std::cin>>s2;

    if (strcmp(s1, s2)==0){
        std::cout << "Strings are equal" << std::endl;
    }else {
        std::cout << "Strings are not equal" << std::endl;
    }

    return 0;
}