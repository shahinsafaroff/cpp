#include <stdio.h>
#include <stdlib.h>

/*int main() {
    int randomNumber;

    srand(time(NULL));
    randomNumber = 1 + rand()%49;

    printf("%d\n", randomNumber);

    return 0;
}*/

/*int main() {
    int randomNumber;

    for (int i=0; i<50; i++) {
        randomNumber = 1 + rand()%49;
        printf("%d\n", randomNumber);
    }


    return 0;
}*/

int main() {
    int randomNumber;
    srand(time(NULL));
    int lotto[49]= {0};
    printf("Number are being generated...\n");
    for (int i=0; i<6; i++) {
        randomNumber = 1 +rand() % 49;

        while(lotto[randomNumber-1] == 1){
            randomNumber = 1+ rand() % 49;
        }
        lotto[randomNumber-1] = 1;
        printf("%d\n", randomNumber);
    }
    printf("Lotto selection is accomplished...\n");
    return 0;
}
