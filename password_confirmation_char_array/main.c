#include <stdio.h>
int main() {
    char password[80];
    char passwordCheck[80];
    int i;
    int notCorrect;

    while(1){
        notCorrect = 0;
        i=0;
        printf("Please enter your password...\n");
        scanf("%s", password);
        printf("Please repeat your password again...\n");
        scanf("%s",passwordCheck);

        while(!(password[i]== '\0' && passwordCheck[i] == '\0')) {
            if(password[i]!=passwordCheck[i]){
                printf("Password is incorrect, please enter your password and repeat it");
                notCorrect = 1;
                break;
            }else {
                i++;
            }
        }

        if(notCorrect==0) {
            printf("Your password check accomplished... Registration is completed...\n");
            break;
        }
    }
    printf("Hello, World!\n");
    return 0;
}
