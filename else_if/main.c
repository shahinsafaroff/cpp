#include <stdio.h>

int main() {
    double score ;
    printf("Please enter your score...\n");
    scanf("%d", &score);

    if (score >=80) {
        printf("Highest Score...\n");
    } else if (score >=60 && score < 100) {
        printf("Moderate Score...\n");
    } else if (score >=40 && score < 60) {
        printf("Fair Score...\n");
    } else if (score >= 20 && score <= 40) {
        printf("Lowest Score...\n");
    } else if ( score < 20) {
        printf("You've failed the exam...\n");
    } else if (score > 100) {
        printf(" Really You must be kidding ...\n");
    } else {
        printf("Incorrect Score input...\n");
    }
    return 0;
}
