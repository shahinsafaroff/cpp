#include <iostream>
using namespace std;

void resizeArray(int *&array, int currentSize, int newSize){
    int *temp = new int [newSize];
    for (int i = 0; i < currentSize; ++i){
        temp[i] = array[i];
    }
    delete [] array;
    array = temp;
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
    size = newSize;
    array[size++] =oneMore;
    cout<<oneMore<<endl;
    return 0;
}
