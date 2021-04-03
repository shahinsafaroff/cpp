#include <stdio.h>

int main() {
    int count1, count2, bigger, lesser, leftage;
    int untouchedBiggerCount, untouchedLesserCount;

    do {
        printf("Please enter 2 items of positive numbers for finding EBOB...\n");
        scanf("%d %d",&count1, &count2);
    } while (count1 <=0 || count2 <=0);

    if(count1>count2) {
        bigger = count1;
        lesser = count2;
        untouchedBiggerCount = count1;
        untouchedLesserCount = count2;
    } else {
        bigger = count2;
        lesser = count1;
        untouchedLesserCount = count1;
        untouchedBiggerCount = count2;
    }

    leftage = bigger % lesser;

    while(leftage != 0){
            bigger = lesser;
            lesser = leftage;
            leftage = bigger % lesser;
    }

    printf("EBOB %d, %d = %d \n", untouchedLesserCount, untouchedBiggerCount, lesser);

    return 0;
}
