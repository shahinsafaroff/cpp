#include <stdio.h>

int main() {
    char name[7] = "Shahin";
    for(int i=0; i<7; i++) {
        printf("%d. Number of element = %c\n", i, name[i]);
    }

    return 0;
}
