#include <iostream>
#include <string.h>

int main() {
    char s[100];
    std::cout << "Please enter the string\n" << std::endl;
    std::cin>>s;
    int i, length, k;
    k=0;
    length = strlen(s);
    for (i=0; i<length; ++i){
        if(s[i] == 'a'){
            k++;
        }
    }
    std::cout << "The quantity of \'a\' is " <<k<< std::endl;
    return 0;
}
