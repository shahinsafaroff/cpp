#include <stdio.h>

int main() {
/*    int widthOfsquare;
    printf("Please enter Width of The Square : ");
    scanf("%d", &widthOfsquare);
    printf("Square of Square: %d cm", widthOfsquare * widthOfsquare);*/
//First Primitive Version
/*    int widthOfRectangular, lengthOfRectangular;
    printf("Please enter Width of The Square : ");
    scanf("%d", &widthOfRectangular);
    printf("Please enter Length of The Square : ");
    scanf("%d", &lengthOfRectangular);

    printf("Square of Square: %d cm\n", widthOfRectangular * lengthOfRectangular);*/

//Second Optimized Version

    int widthOfRectangular, lengthOfRectangular;
    printf("Please enter Width and Length of The Square : ");
    scanf("%d%d", &widthOfRectangular, &lengthOfRectangular);
    printf("Square of Square: %d cm\n", widthOfRectangular * lengthOfRectangular);

    return 0;
}
