#include <iostream>
using namespace std;

void resizeArray(int *&array, int currentSize, int newSize){
    int *temp = new int [newSize];
    for (int i = 0; i < currentSize; ++i){
        temp[i] = array[i];
        cout<<array[i]<<" ";
    }
    cout<<endl;
    delete [] array;
    array = temp;
    for (int i = 0; i < newSize; ++i){
        temp[i] = array[i];
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int size = 10;
    int *array = new int[size];
    for (int i = 0; i < size; ++i){
        array[i] = i*10;
    }
    int oneMore = 110;
    int newSize = size *2;
    resizeArray(array, size, newSize);
//    size = newSize;
    array[size] = oneMore;
//    cout<<oneMore<<endl;
for(int i=0;i<newSize;i++){
    cout<<array[i]<<" ";
}
cout<<endl;
    return 0;
}
