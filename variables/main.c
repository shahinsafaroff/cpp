#include <stdio.h>

int main() {

    int tamSayi = 6;
    double buyukYerKapsamliKesirliSayi = 7.2;
    char karakter = 'K';
    char karakterDizisi[13] = "Kaan Academy";
    float kesirliSayi = 9.2;

    printf("%d RAM-da %d byte yer tutar \n", tamSayi, sizeof (int));
    printf("%.2f RAM-da %d byte yer tutar \n", buyukYerKapsamliKesirliSayi, sizeof (double));
    printf("%c RAM-da %d byte yer tutar\n", karakter, sizeof (char));
    printf("%s\n", karakterDizisi);
    printf("%.1f RAM-da %d byte yer tutar\n", kesirliSayi, sizeof (float));
    return 0;
}
