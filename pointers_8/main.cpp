#include <iostream>
using namespace std;
void printNameElements(int *countsAddress, int length) {
    for(int i=0; i<length;++i) {
        cout<<countsAddress[i]<<endl;
    }
}

void increment(int *countsAddress, int incrementCount, int length) {
    for(int i=0; i<length;++i) {
        countsAddress[i] += incrementCount;
    }
}

void decrement(int *countsAddress, int decrementCount, int length) {
    for(int i=0; i<length;++i) {
        countsAddress[i] -= decrementCount;
    }
}

int sumCountsElements(int *countsAddress, int length){
    int i=0;
    int sum = 0;
    for(i=0;i<length;++i){
        sum +=countsAddress[i];
    }
    return sum;
}

int maximum(int *countsAddress, int length){
    int i;
    int biggest = countsAddress[0];
    for(int i=1; i<length; ++i){
        if(biggest<countsAddress[i]){
            biggest = countsAddress[i];
        }
    }
    return biggest;
}

int minimum(int *countsAddress, int length){
    int i;
    int lesser = countsAddress[0];
    for(int i=1; i<length; ++i){
        if(lesser>countsAddress[i]){
            lesser = countsAddress[i];
        }
    }
    return lesser;
}

int average(int *countsAddress, int length) {
    int average = sumCountsElements(countsAddress, length) / length;
    return average;
}

int main() {
    int counts[] = {5,10,15,20};
    printNameElements(counts,4);
    maximum(counts, 4);
    cout<<maximum(counts, 4)<<endl;
    minimum(counts, 4);
    cout<<minimum(counts, 4)<<endl;
    average(counts, 4);
    cout<<average(counts,4)<<endl;
    cout<<sumCountsElements(counts,4)<<endl;
    increment(counts, 5, 4);
    printNameElements(counts,4);
    cout<<sumCountsElements(counts,4)<<endl;
    decrement(counts, 10, 4);
    printNameElements(counts,4);
    sumCountsElements(counts, 4);
    cout<<sumCountsElements(counts,4)<<endl;
    return 0;
}
