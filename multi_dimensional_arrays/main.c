#include <stdio.h>

/*int main() {
    int multiArray[3][2] = {1, 2, 3, 4, 5, 6}; //3 rows and 2 columns

    printf("%d\n",multiArray[0][0]);
    printf("%d\n",multiArray[0][1]);
    printf("%d\n",multiArray[1][0]);
    printf("%d\n",multiArray[1][1]);
    printf("%d\n",multiArray[2][0]);
    printf("%d\n",multiArray[2][1]);
    return 0;
}*/

/*
int main() {

int multiArrayDoubleValue[3][2] = {{11,12}, {13,14}, {15,16}};

for (int i = 0; i < 3; i++){
    for (int j = 0; j < 2; j++) {
        printf("%d ", multiArrayDoubleValue[i][j]);
    }
}

    return 0;
}*/

int main() {
int multiArray[2][2][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++){
            printf("%d. %d. %d. enter the element: \n", i+1, j+1, k+1);
            scanf("%d", &multiArray[i][j][k]);
            }
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++){
            printf("%d ", multiArray[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
return 0;
}
