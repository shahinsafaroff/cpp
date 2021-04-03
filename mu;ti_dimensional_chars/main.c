#include <stdio.h>

int main() {
    char student[4][20] = {"Memezok", "Pepezok", "Meningit", "Muskulist"};

    for (int i=0; i<4; i++){
        printf("%s\n", student);
    }

    return 0;
}
