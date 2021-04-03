#include <stdio.h>

int main() {

int tamSayi;
double buyukYerKapsamliKesirliSayi;
char karakter;
char karakterDizisi[13];
float kesirliSayi;

printf("Please enter your Integer value ...\n");

scanf("%d", &tamSayi);

printf("Please enter your Double value ...\n");

scanf("%lf", &buyukYerKapsamliKesirliSayi);

printf("Please enter your Float value ...\n");

scanf("%f", &kesirliSayi);

printf("Please enter your Character value ...\n");

scanf(" %c", &karakter);

printf("Please enter your String value ...\n");

scanf("%s", &karakterDizisi);

printf("Entered INTEGER:  %d\n", tamSayi);

printf("Entered DOUBLE:  %lf\n", buyukYerKapsamliKesirliSayi);

printf("Entered FLOAT:  %f\n", kesirliSayi);

printf("Entered CHARACTER:  %c\n", karakter);

printf("Entered STRING:  %s\n", karakterDizisi);



    return 0;
}
