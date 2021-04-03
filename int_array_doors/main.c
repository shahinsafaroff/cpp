#include <stdio.h>

int main() {
    int opened[10] = {0};
    int tour, door;
    for (tour = 0; tour < 10; tour++) {
        for (door = tour; door < 10; door = door + tour + 1) {
            opened[door] = !opened[door];
        }

    }
    printf("Opened doors are those: ...\n");
    for (door = 0; door < 10; door++) {
        if(opened[door]) {
            printf("%d ", door+1);
        }

    }
    return 0;
}
