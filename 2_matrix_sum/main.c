#include <stdio.h>
#include <stdlib.h>
int main() {
    int array1[3][4] = {0};
    int array2[3][4] = {0};
    int sum[3][4];

    printf("You are entering first matrix values... \n");
    for (int i = 0; i < 3; i ++){
        for(int j = 0; j < 4; j ++){
            printf("%d. row %d. column element is entered...\n", i+1, j+1);
            scanf("%d", &array1[i][j]);
        }
    }
    system("CLS");
    printf("You are entering second matrix values... \n");
    for (int i = 0; i < 3; i ++){
        for(int j = 0; j < 4; j ++){
            printf("%d. row %d. column element is entered...\n", i+1, j+1);
            scanf("%d", &array2[i][j]);
        }
    }
    system("CLS");

    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; ++j) {
            sum[i][j] = array1[i][j] + array2[i][j];
            printf("2 matrix summ is: \n");
            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 4; ++j)
                    printf("%d ", sum[i][j]);
            printf("\n");
        }
        }
    return 0;
}
