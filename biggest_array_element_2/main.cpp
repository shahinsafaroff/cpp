#include <iostream>
int max (int *array){
    int i, k;
    k = array[0];

    for (i=1; i<5; ++i){
        if (array[i]>k) {
            k = array[i];
        }
    }
    return k;
}
void enterArrayElements (int *array){
    int i;
    std::cout << "Please enter an array elements: " << std::endl;
    for (i=0; i<5; ++i){
        std::cin>>array[i];
    }
}
int main() {
    int array[5];
    enterArrayElements(array);
    std::cout<<max(array)<<std::endl;

    return 0;
}
