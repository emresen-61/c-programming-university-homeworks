#include <stdio.h>

int main() {
    int i, j, n;
    int yazilacak;

    printf("Enter positive integer: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            yazilacak = (i + j) % n + 1;
            printf("%d", yazilacak);
        }
        printf("\n");
    }

    return 0;
}
