#include <stdio.h>

int main() {
    int enteredNumbersQuantity;
    float numbers[100], sum = 0, middleOfEnteredNumbers;

    printf("Please enter the numebrs for middle number calculation\n");
    scanf("%d", &enteredNumbersQuantity);

    while (enteredNumbersQuantity > 100 || enteredNumbersQuantity <=0){
        printf("Please enter the number between 1 and 100 ...\n");
        printf("Please enter how many numbers you wanna sum and take the middle point...\n");
        scanf("%d", &enteredNumbersQuantity);
    }

    for (int i = 0; i< enteredNumbersQuantity; i++) {
        printf("Please enter %d. number\n", i+1);
        scanf("%f", &numbers[i]);
        sum += numbers[i];

    middleOfEnteredNumbers = sum / enteredNumbersQuantity;

    printf("Entered numbers sum: = %f\n", sum);
    printf("Entered numbers middle point = %f\n", middleOfEnteredNumbers);
    }
    return 0;
}
