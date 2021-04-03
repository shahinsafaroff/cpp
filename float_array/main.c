#include <stdio.h>

int main() {
    int i;
    float counts[7]= {};

    for(i=0; i<7; i++){
        printf("%d. element was entered....\n", i+1);
        scanf("%f", counts[i]);
    }

    for(i=0; i<7;i++) {
        printf("%f", counts[i]);
    }

    return 0;
}
