#include <stdio.h>

int main() {

printf("***LOOP ANINHADO COM FOR***\n");

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("%d x %d = %d\t", i, j, i * j);
        }
        printf("\n");
    }

printf("\n--------------------------------------------\n");
printf("***LOOP ANINHADO COM WHILE***\n");

    int x = 1;
    while (x <= 3) {
        int y = 1;
        while (y <= 3) {
            printf("%d x %d = %d\t", x, y, x * y);
            y++;
        }
        printf("\n");
        x++;
    }

printf("\n--------------------------------------------\n");
printf("***LOOP ANINHADO COM DO-WHILE***\n");

    int z = 1;
    do {
        int w = 1;
        do {
            printf("%d x %d = %d\t", z, w, z * w);
            w++;
        } while (w <= 3);
        printf("\n");
        z++;
    } while (z <= 3);

return 0;

}