#include <stdio.h>

int main() {
    int i, j;
    int buyukluk = 11;

    for (i = 1; i <= buyukluk; i++) {
        for (j = 1; j <= buyukluk; j++) {
            if (i > 1 && i < buyukluk && j > 1 && j < buyukluk) {
                if (i == j || i + j == buyukluk + 1) {
                    printf(" ");
                } else {
                    printf("*");
                }
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
